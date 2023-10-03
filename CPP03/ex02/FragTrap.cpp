/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/03 16:39:09 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap unit " << this->getName() << " has been constructed" << std::endl;
	this->setHP(100);
	this->setEP(100);
	this->setAP(30);
};

FragTrap::~FragTrap()
{
	std::cout << "FragTrap unit " << this->getName() << " has been destructed" << std::endl;
};

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
};

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	if (this != &obj)
	{
		this->setName(obj.getName());
		this->setHP(obj.getHP());
		this->setEP(obj.getEP());
		this->setAP(obj.getAP());
	}
	return (*this);
};

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " is requesting for some high fives, don't leave it hanging" << std::endl;
};
