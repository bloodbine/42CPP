/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:10:58 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/07 15:09:57 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <set>
#include <vector>

const char *Span::SpanFullException::what() const throw()
{return ("Span would exceed length limit");};
const char *Span::SpanNotEnoughElementsException::what() const throw()
{return ("Span does not have enoguh elements to measure Distances");};

Span::Span(const unsigned int n): _maxLen(n) {};
Span::Span(const Span& obj): _maxLen(obj._maxLen) {*this = obj;};
Span&	Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		if (!this->_cont.empty())
			this->_cont.clear();
		for (std::vector<int>::const_iterator it = obj._cont.begin(); it != obj._cont.end(); it++)
		{
			if (this->_cont.size() >= this->_maxLen)
				throw Span::SpanFullException();
			this->_cont.push_back(*it);
		}
	}
	return (*this);
};
Span::~Span() {};

void	Span::addNumber(const int num)
{
	if (this->_cont.size() >= this->_maxLen)
		throw Span::SpanFullException();
	this->_cont.push_back(num);
};

void	Span::addRange(const int numbers[], int len)
{
	if (this->_cont.size() == this->_maxLen)
		throw Span::SpanFullException();
	for (int i = 0; i < len; i++)
	{
		if (this->_cont.size() > this->_maxLen)
			throw Span::SpanFullException();
		this->_cont.push_back(*(numbers++));
	}
};

void	Span::addRange(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	while (begin != end)
	{
		if (this->_cont.size() >= this->_maxLen)
			throw Span::SpanFullException();
		this->_cont.push_back(*begin++);
	}
};

unsigned int Span::longestSpan(void)
{
	if (this->_cont.size() <= 1)
		throw Span::SpanNotEnoughElementsException();
	unsigned int max = *std::max_element(this->_cont.begin(), this->_cont.end());
	unsigned int min = *std::min_element(this->_cont.begin(), this->_cont.end());
	return (max - min);
};

unsigned int Span::shortestSpan(void)
{
	if (this->_cont.size() <= 1)
		throw Span::SpanNotEnoughElementsException();
	std::vector<int> vectorCopy = this->_cont;
	std::sort(vectorCopy.begin(), vectorCopy.end());
	int minSpan = INT_MAX;
	for (size_t i = 0; i < vectorCopy.size(); ++i)
	{
		for (size_t j = i + 1; j < vectorCopy.size(); ++j)
		{
			int tempSpan = vectorCopy[j] - vectorCopy[i];
			if (tempSpan < minSpan)
				minSpan = tempSpan;
		}
	}
	return (minSpan);
};

int		limitedRand(void) {return (std::rand() % 100000 + 1);};

void	Span::fillSpan(void)
{
	if (this->_cont.empty())
	{
		std::srand(std::time(0));
		std::vector<int> tempVector = std::vector<int>(this->_maxLen, 0);
		std::generate(tempVector.begin(), tempVector.end(), limitedRand);
		std::set<int> tempSet = std::set<int>(tempVector.begin(), tempVector.end());
		this->_cont = std::vector<int>(tempSet.begin(), tempSet.end());
	}
};
