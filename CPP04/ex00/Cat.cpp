/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:08 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 16:08:50 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat standard constructor called" << std::endl;
};

Cat::Cat(const Cat& obj): Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
};

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
};

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
};

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
};
