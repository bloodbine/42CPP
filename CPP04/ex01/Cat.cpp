/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:08 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/07 15:29:25 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat standard constructor called" << std::endl;
	this->_brain = new Brain();
	this->_brain->fillBrain("Food");
	this->_type = "Cat";
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
	{
		this->_type = obj._type;
		this->_brain = obj._brain;
	}
	return (*this);
};

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
};

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
};

void	Cat::listIdeas(void) {this->_brain->listIdeas();};

std::string	Cat::getIdea(int index) {return (this->_brain->getIdea(index));};
