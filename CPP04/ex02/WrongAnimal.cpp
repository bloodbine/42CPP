/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:18 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 16:11:07 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("Unknown")
{
	std::cout << "WrongAnimal standard constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
};

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
};

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
};

void	WrongAnimal::makeSound(void) const
{
	std::cout << "E̴̳͌l̴͍̃͜d̵̲̍̀r̴̬̟͋̓ỉ̵̹͝t̶̘͉̋c̵̩̊̍͗h̷͉͕̬͋ ̴̗̃́Ñ̵̢̤̭o̴̠̅̈́ḭ̶̞̻̊̚s̴͖͐͜è̶͖̰s̵̰̕" << std::endl;
};
