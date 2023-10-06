/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:24 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 16:11:11 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat standard constructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat& obj): WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
};

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
};

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
};

void	WrongCat::makeSound(void) const
{
	std::cout << "Ḿ̷̯͙e̸͍̚o̶̱͑̄̕ͅw̷̢͎̬͊̍" << std::endl;
};
