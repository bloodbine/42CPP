/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:13 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/07 15:29:34 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog standard constructor called" << std::endl;
	this->_brain = new Brain();
	this->_brain->fillBrain("Bones");
	this->_type = "Dog";
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
	{
		this->_type = obj._type;
		this->_brain = obj._brain;
	}
	return (*this);
};

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
};

void	Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
};

void	Dog::listIdeas(void) {this->_brain->listIdeas();};

std::string	Dog::getIdea(int index) {return (this->_brain->getIdea(index));};
