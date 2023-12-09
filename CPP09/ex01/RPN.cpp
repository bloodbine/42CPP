/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:32:47 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/09 15:13:41 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

ReversePolishNotation::ReversePolishNotation(std::string input) {this->_inputLine = input;this->_ParseAndFormatData();};

ReversePolishNotation::~ReversePolishNotation() {};

ReversePolishNotation::ReversePolishNotation(const ReversePolishNotation& obj) {*this = obj;};

ReversePolishNotation& ReversePolishNotation::operator=(const ReversePolishNotation& obj)
{
	if (this != &obj)
		this->_data = obj._data;
	return (*this);
};

void	ReversePolishNotation::_ParseAndFormatData()
{
	size_t stringPos = 0;

	while ((stringPos = this->_inputLine.find_first_of(" ", stringPos + 1)) != std::string::npos)
		this->_inputLine.replace(stringPos, 1, "");
	if ((stringPos = this->_inputLine.find_first_not_of("0123456789+-*/")) != std::string::npos)
	{
		std::string errorMessage = "Error: Invalid character in line: '";
		errorMessage += this->_inputLine[stringPos];
		errorMessage += '\'';
		throw std::logic_error(errorMessage);
	}
};

void	ReversePolishNotation::Calculate()
{
	for (size_t i = 0; i < this->_inputLine.length(); i++)
		this->_EvaluateMember(this->_inputLine[i]);
};

void	ReversePolishNotation::_EvaluateMember(char member)
{
	int popped[2];
	if (std::isdigit(member))
		this->_data.push(static_cast<int>(member - '0'));
	else if (this->_data.size() >= 2)
	{
		popped[0] = this->_data.top();
		this->_data.pop();
		popped[1] = this->_data.top();
		this->_data.pop();
		switch (member)
		{
			case '+':
				this->_data.push((popped[1] + popped[0]));
				break;
			case '-':
				this->_data.push((popped[1] - popped[0]));
				break;
			case '*':
				this->_data.push((popped[1] * popped[0]));
				break;
			case '/':
				this->_data.push((popped[1] / popped[0]));
				break;
		}
	}
};

void	ReversePolishNotation::DisplayResult()
{
	if (this->_data.size() != 0)
		std::cout << this->_data.top() << std::endl;
	else
		std::cerr << "Error: Stack empty" << std::endl;
};
