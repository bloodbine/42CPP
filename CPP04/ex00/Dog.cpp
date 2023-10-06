/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:13 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 16:09:03 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog standard constructor called" << std::endl;
};

Dog::Dog(const Dog& obj): Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
};

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
};

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
};

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
};
