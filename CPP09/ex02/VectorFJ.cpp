/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   VectorFJ.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:33:54 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/16 16:30:18 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "VectorFJ.hpp"
#include <iostream>

VectorFJ::VectorFJ(std::vector<uint32_t>& vectorRef): _vectorRef(vectorRef), _isEven(true) {};

VectorFJ::VectorFJ(const VectorFJ& obj): _vectorRef(obj._vectorRef), _isEven(true) {(void)obj; *this = obj;};

VectorFJ& VectorFJ::operator=(const VectorFJ& obj) {(void)obj; return *this;};

VectorFJ::~VectorFJ() {};

void	VectorFJ::FordJohnsonSort() {this->_sortPairs();};

void	VectorFJ::_sortPairs(void)
{
	unsigned long vectorsize = this->_vectorRef.size();
	uint32_t tempnum;

	if (vectorsize == 2)
	{
		if (this->_vectorRef[0] > this->_vectorRef[1])
		{
			tempnum = this->_vectorRef[0];
			this->_vectorRef[0] = this->_vectorRef[1];
			this->_vectorRef[1] = tempnum;
		}
	}
	else if (vectorsize > 2)
	{
		if (vectorsize % 2 != 0)
		{
			this->_looseEnd = *(this->_vectorRef.end() - 1);
			this->_vectorRef.pop_back();
			this->_isEven = false;
			vectorsize--;
		}
		for (std::vector<uint32_t>::iterator it = this->_vectorRef.begin();
		it != this->_vectorRef.end();
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

void	VectorFJ::_insertSortBack(std::vector<uint32_t>::iterator current)
{
	if (current != this->_vectorRef.begin() && *current < *(current - 2))
	{
		uint32_t temp[2] = {*current, *(current + 1)};
		*current = *(current - 2);
		*(current + 1) = *(current - 1);
		*(current - 2) = temp[0];
		*(current - 1) = temp[1];
		this->_insertSortBack(current - 2);
	}
}

void	VectorFJ::_sortByPairFirst(void)
{
	for (std::vector<uint32_t>::iterator it = this->_vectorRef.begin();
	it != this->_vectorRef.end();
	it += 2) this->_insertSortBack(it);
	this->_mergeInsertSecond();
};

void	VectorFJ::_mergeInsertSecond(void)
{
	std::vector<uint32_t> tempVector;
	std::vector<uint32_t>::size_type i = 1;
	tempVector.reserve(this->_vectorRef.size() / 2);
	while (i < this->_vectorRef.size())
	{
		tempVector.push_back(this->_vectorRef[i]);
		this->_vectorRef.erase(this->_vectorRef.begin() + i);
		i++;
	}
	if (this->_isEven == false)
		tempVector.push_back(this->_looseEnd);
	std::vector<uint32_t>::iterator tempit = tempVector.begin();
	while (!tempVector.empty())
	{
		std::vector<uint32_t>::iterator it = this->_vectorRef.begin();
		while (tempit != tempVector.end() && it != this->_vectorRef.end() && *tempit > *it) {it++;}
		this->_vectorRef.insert(it, *tempit);
		tempit = tempVector.erase(tempit);
	}
};
