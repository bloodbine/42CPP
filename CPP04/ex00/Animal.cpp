/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:03 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 16:08:55 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Unknown")
{
	std::cout << "Animal standard constructor called" << std::endl;
};

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
};

Animal& Animal::operator=(const Animal& obj)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
};

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
};

std::string	Animal::getType(void) const
{
	return (this->_type);
};

void	Animal::makeSound(void) const
{
	std::cout << "The Unknown animal made some unrecognizable sounds" << std::endl;
};
