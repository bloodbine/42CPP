/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:42:02 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/18 16:19:16 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <iomanip>

ScalarConverter::ScalarConverter(){};
ScalarConverter::ScalarConverter(const ScalarConverter& obj){*this = obj;};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj){(void)(obj); return (*this);};
ScalarConverter::~ScalarConverter(){};

void	ScalarConverter::_fromMisc(int mcase)
{
	switch (mcase)
	{
		case 0:
			std::cout << "Char: Impossible" << std::endl;
			std::cout << "Int: Impossible" << std::endl;
			std::cout << "Float: -inff" << std::endl;
			std::cout << "Double: -inf" << std::endl;
			break;
		case 1:
			std::cout << "Char: Impossible" << std::endl;
			std::cout << "Int: Impossible" << std::endl;
			std::cout << "Float: +inff" << std::endl;
			std::cout << "Double: +inf" << std::endl;
			break;
		case 2:
			std::cout << "Char: Impossible" << std::endl;
			std::cout << "Int: Impossible" << std::endl;
			std::cout << "Float: +inff" << std::endl;
			std::cout << "Double: +inf" << std::endl;
			break;
		case 3:
			std::cout << "Char: Impossible" << std::endl;
			std::cout << "Int: Impossible" << std::endl;
			std::cout << "Float: -inff" << std::endl;
			std::cout << "Double: -inf" << std::endl;
			break;
		case 4:
			std::cout << "Char: Impossible" << std::endl;
			std::cout << "Int: Impossible" << std::endl;
			std::cout << "Float: nanf" << std::endl;
			std::cout << "Double: nan" << std::endl;
			break;
	}
};

void	ScalarConverter::_fromChar(std::string literal)
{
	char c = static_cast<char>(literal[0]);
	if (std::isprint(literal[0]) == 0)
		std::cout << "Char: Non Displayable" << std::endl;
	else
		std::cout << "Char: '" << c << "'" << std::endl;
	std::cout << "Int: " << static_cast<int>(c) << std::endl;
	std::cout << "Float: " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "Double: " << static_cast<double>(c) << std::endl;
};

void	ScalarConverter::_fromInt(std::string literal)
{
	try
	{
		int i = static_cast<int>(std::atoi(literal.c_str()));
		if (std::isprint(static_cast<char>(i)) == 0)
			std::cout << "Char: Non Displayable" << std::endl;
		else
			std::cout << "Char: '" << static_cast<char>(i) << "'" << std::endl;
		std::cout << "Int: " << i << std::endl;
		std::cout << "Float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(i) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Char: Impossible" << std::endl;
		std::cout << "Int: Impossible" << std::endl;
		std::cout << "Float: Impossible" << std::endl;
		std::cout << "Double: Impossible" << std::endl;
	}
};

void	ScalarConverter::_fromFloat(std::string literal)
{
	float f = static_cast<float>(std::strtof(literal.c_str(), NULL));
	if (std::fmod(f, static_cast<float>(static_cast<int>(f))) == 0.0f && std::isprint(static_cast<int>(f)) != 0)
		std::cout << "Char: '" << static_cast<char>(f) << "'" << std::endl;
	else if (std::fmod(f, static_cast<float>(static_cast<int>(f))) == 0.0f && std::isprint(static_cast<int>(f)) == 0)
		std::cout << "Char: Non Displayable" << std::endl;
	else
		std::cout << "Char: Impossible" << std::endl;
	std::cout << "Int: " << static_cast<int>(f) << std::endl;
	std::cout << "Float: " << f << "f" << std::endl;
	std::cout << "Double: " << static_cast<double>(f) << std::endl;
};

void	ScalarConverter::_fromDouble(std::string literal)
{
	double d = static_cast<double>(std::strtod(literal.c_str(), NULL));
	if (std::fmod(d, static_cast<double>(static_cast<int>(d))) == 0.0 && std::isprint(static_cast<int>(d)) != 0)
		std::cout << "Char: '" << static_cast<char>(d) << "'" << std::endl;
	else if (std::fmod(d, static_cast<double>(static_cast<int>(d))) == 0.0 && std::isprint(static_cast<int>(d)) == 0)
		std::cout << "Char: Non Displayable" << std::endl;
	else
		std::cout << "Char: Impossible" << std::endl;
	std::cout << "Int: " << static_cast<int>(d) << std::endl;
	std::cout << "Float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "Double: " << (d) << std::endl;
};

void	ScalarConverter::convert(std::string literal)
{
	std::string misc[5] = {"-inff", "+inff", "-inf", "+inf", "nan"};
	size_t	f_pos = literal.find("f");
	size_t	dot_pos = literal.find(".");
	bool	is_misc = false;
	std::cout.setf(std::ios::fixed);
	std::streamsize def_precision = std::cout.precision();
	std::cout.precision(1);
	int i = -1;
	while (i < 5 && is_misc == false)
		if (literal.compare(misc[++i]) == 0)
			is_misc = true;
	if (is_misc)
		ScalarConverter::_fromMisc(i);
	else if (literal.length() > 1 && ((f_pos != std::string::npos && f_pos != literal.length() - 1) || (dot_pos != std::string::npos && dot_pos == literal.length() - 1)))
		std::cout << "Error" << std::endl;
	else if (literal.length() == 1 && std::isprint(literal[0]) != 0 && (std::isdigit(literal[0]) == 0))
		ScalarConverter::_fromChar(literal);
	else if (dot_pos != std::string::npos && f_pos != std::string::npos && std::isdigit(literal[f_pos - 1]) != 0)
		ScalarConverter::_fromFloat(literal);
	else if (dot_pos != std::string::npos && std::isdigit(literal[dot_pos + 1]) != 0)
		ScalarConverter::_fromDouble(literal);
	else
		ScalarConverter::_fromInt(literal);
	std::cout.unsetf(std::ios::fixed);
	std::cout.precision(def_precision);
};
