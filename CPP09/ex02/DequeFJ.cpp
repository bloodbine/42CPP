/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DequeFJ.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:37:59 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/16 15:49:21 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DequeFJ.hpp"
#include <deque>
#include <iostream>

DequeFJ::DequeFJ(std::deque<uint32_t>& dequeRef): _dequeRef(dequeRef), _isEven(true) {};

DequeFJ::DequeFJ(const DequeFJ& obj): _dequeRef(obj._dequeRef), _isEven(true) {(void)obj; *this = obj;};

DequeFJ& DequeFJ::operator=(const DequeFJ& obj) {(void)obj; return *this;};

DequeFJ::~DequeFJ() {};

void	DequeFJ::FordJohnsonSort() {this->_sortPairs();};

void	DequeFJ::_sortPairs(void)
{
	unsigned long dequesize = this->_dequeRef.size();
	uint32_t tempnum;
	
	if (dequesize == 2)
	{
		if (this->_dequeRef[0] > this->_dequeRef[1])
		{
			tempnum = this->_dequeRef[0];
			this->_dequeRef.erase(this->_dequeRef.begin());
			this->_dequeRef.push_back(tempnum);
		}
	}
	else if (dequesize > 2)
	{
		if (dequesize % 2 != 0)
		{
			this->_looseEnd = *(this->_dequeRef.end() - 1);
			this->_dequeRef.pop_back();
			this->_isEven = false;
			dequesize--;
		}
		for (std::deque<uint32_t>::iterator it = this->_dequeRef.begin();
		it < this->_dequeRef.end();
		it += 2)
		{
			if (*it < *(it + 1))
			{
				tempnum = *it;
				*it = *(it + 1);
				*(it + 1) = tempnum;
			}
		}
		this->_sortByPairFirst();
	}
};

void	DequeFJ::_insertSortBack(std::deque<uint32_t>::iterator current)
{
	if (current != this->_dequeRef.begin() && *current < *(current - 2))
	{
		uint32_t temp[2] = {*current, *(current + 1)};
		*current = *(current - 2);
		*(current + 1) = *(current - 1);
		*(current - 2) = temp[0];
		*(current - 1) = temp[1];
		this->_insertSortBack(current - 2);
	}
};

void	DequeFJ::_sortByPairFirst(void)
{
	for (std::deque<uint32_t>::iterator it = this->_dequeRef.begin();
	it != this->_dequeRef.end();
	it += 2) this->_insertSortBack(it);
	this->_mergeInsertSecond();
};

void	DequeFJ::_mergeInsertSecond(void)
{
	std::deque<uint32_t> tempDeque;
	std::deque<uint32_t>::size_type i = 1;
	while (i < this->_dequeRef.size())
	{
		tempDeque.push_back(this->_dequeRef[i]);
		this->_dequeRef.erase(this->_dequeRef.begin() + i);
		i++;
	}
	if (this->_isEven == false)
		tempDeque.push_back(this->_looseEnd);
	std::deque<uint32_t>::iterator tempit = tempDeque.begin();
	while (!tempDeque.empty())
	{
		std::deque<uint32_t>::iterator it = this->_dequeRef.begin();
		while (*tempit > *it) {it++;}
		this->_dequeRef.insert(it, *tempit);
		tempit = tempDeque.erase(tempit);
	}
};
