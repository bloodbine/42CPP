/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:45:20 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/15 13:55:22 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **arguments)
{
	size_t i = 0;
	long long tempnum = 0;
	while (arguments[i])
	{
		std::string arg(arguments[i]);
		tempnum = std::stoll(arg);
		if (tempnum < 0)
			throw std::invalid_argument("Input must be positive integer");
		this->_vectorCont.push_back(static_cast<uint32_t>(tempnum));
		i++;
	}
	this->_dequeCont = std::deque<uint32_t>(this->_vectorCont.begin(), this->_vectorCont.end());
	this->_vectorCont.reserve(this->_vectorCont.size() + 2);
};

PmergeMe::PmergeMe(const PmergeMe& obj) {*this = obj;};

PmergeMe& PmergeMe::operator=(const PmergeMe& obj)
{
	if (this != &obj)
	{
		this->_vectorCont.clear();
		this->_vectorCont = std::vector<uint32_t>(obj._vectorCont.begin(), obj._vectorCont.end());
		this->_dequeCont.clear();
		this->_dequeCont = std::deque<uint32_t>(obj._dequeCont.begin(), obj._dequeCont.end());
		this->_vectorTime[0] = obj._vectorTime[0];
		this->_vectorTime[1] = obj._vectorTime[1];
		this->_dequeTime[0] = obj._dequeTime[0];
		this->_dequeTime[1] = obj._dequeTime[1];
	}
	return (*this);
};

PmergeMe::~PmergeMe() {};

void	PmergeMe::recordVectorStart() {this->_vectorTime[0] = std::time(NULL);};
void	PmergeMe::recordVectorEnd() {this->_vectorTime[1] = std::time(NULL);};
void	PmergeMe::recordDequeStart() {this->_dequeTime[0] = std::time(NULL);};
void	PmergeMe::recordDequeEnd() {this->_dequeTime[1] = std::time(NULL);};

std::vector<uint32_t>&	PmergeMe::getVectorCont() {return (this->_vectorCont);};
std::deque<uint32_t>&	PmergeMe::getDequeCont() {return (this->_dequeCont);};

void	PmergeMe::displayVectorCont(void)
{
	for (std::vector<uint32_t>::iterator it = this->_vectorCont.begin();
		it != this->_vectorCont.end();
		it++) std::cout << *it << " ";
};

void	PmergeMe::displayDequeCont(void)
{
	for (std::deque<uint32_t>::iterator it = this->_dequeCont.begin();
		it != this->_dequeCont.end();
		it++) std::cout << *it << " ";
};
