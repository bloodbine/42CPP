/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:04:59 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/24 11:28:20 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(): _index(0)
{
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
};

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = obj;
};

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_index = obj._index;
		for (size_t i = 0; i < 4; i++)
			this->_materias[i] = obj._materias[i];
	}
	return (*this);
};

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		delete this->_materias[i];
};

void	MateriaSource::learnMateria(AMateria* m)
{
	if (this->_index < 4 && m != NULL)
	{
		this->_materias[this->_index] = m;
		this->_index++;
	}
};

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	size_t	i = 0;
	while (i < _index && _materias[i]->getType() != type) i++;
	if (_materias[i] != NULL)
		return(&(_materias[i]->clone()));
	return(0);
};
