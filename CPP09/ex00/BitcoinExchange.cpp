/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:24:46 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/13 14:35:45 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <algorithm>
#include <functional>
#include <string>

#define ALLOWED_CH "01234567890+-."

BitcoinExchange::BitcoinExchange()
{
	this->_parseData();
};

BitcoinExchange::~BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj) {*this = obj;};

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	if (this != &obj)
	{
		this->_data = obj._data;
	}
	return (*this);
};

void BitcoinExchange::_parseData(void)
{
	std::ifstream	inputStream("data.csv", std::ifstream::in);
	std::string		line;
	std::string		splitline[2];
	time_t			time;

	if (inputStream.is_open() && inputStream.good())
	{
		std::getline(inputStream, line);
		line.clear();
		while (inputStream.good())
		{
			std::getline(inputStream, line);
			if (inputStream.eof() && line.length() == 0)
				break;
			splitline[0] = line.substr(0, 10);
			splitline[1] = line.substr(11, line.length());
			time = BitcoinExchange::_stringToTimeT(splitline[0]);
			if (time == -1)
				std::cerr << "Error: bad input in data.csv => " << line << std::endl;
			else
				this->_data[time] = static_cast<float>(std::strtod(splitline[1].c_str(), NULL));
		}
	}
};

bool less_than_or_equal(const std::pair<time_t, float> element, time_t searchKey)
{return (element.first <= searchKey);};

void BitcoinExchange::CalculateExchange(std::string filename)
{
	std::ifstream	inputStream(filename.c_str(), std::ifstream::in);
	std::string		line;
	std::string		splitline[2];
	std::map<time_t, float>::reverse_iterator object;
	float			value;
	time_t			time;

	if (this->_data.empty())
		std::cerr << "Error: Missing data.csv" << std::endl;
	else if (inputStream.is_open() && inputStream.good())
	{
		std::getline(inputStream, line);
		line.clear();
		while (inputStream.good())
		{
			std::getline(inputStream, line);
			if (inputStream.eof() && line.length() == 0)
				break;
			if (line.length() < 14)
				std::cerr << "Error: bad input => " << line << std::endl;
			else
			{
				splitline[0] = line.substr(0, 10);
				splitline[1] = line.substr(13, line.length());
				time = BitcoinExchange::_stringToTimeT(splitline[0]);
				if (time == -1)
					std::cerr << "Error: bad input => " << line << std::endl;
				else
				{
					try
					{
						value = static_cast<float>(std::strtod(splitline[1].c_str(), NULL));
						if (splitline[1].find_first_not_of(ALLOWED_CH) != std::string::npos)
							std::cerr << "Error: bad input => " << line << std::endl;
						else if (value < 0)
							std::cerr << "Error: not a positive number" << std::endl;
						else if (value > 1000)
							std::cerr << "Error: too large a number" << std::endl;
						else
						{
							object = std::find_if(this->_data.rbegin(), this->_data.rend(),
							bind2nd(ptr_fun(less_than_or_equal), time));
							if (object != this->_data.rend())
								std::cout << splitline[0] << " => " << splitline[1] << " = "\
								<< value * object->second << std::endl;
							else
								std::cerr << "Error: bad input => " << splitline[0] << std::endl;
						}
					}
					catch (std::exception &e)
					{std::cerr << "Error: bad input => " << line << std::endl;}
				}
			}
		}
		inputStream.close();
	}
	else
		std::cerr << "Error: Failed to open file." << std::endl;
};

time_t	BitcoinExchange::_stringToTimeT(std::string line)
{
	tm time = {};
	strptime(line.c_str(), "%Y-%m-%d", &time);
	return (mktime(&time));
};
