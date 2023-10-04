/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/04 16:10:07 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->setHP(100);
	this->setEP(100);
	this->setAP(30);
	std::cout << "FragTrap unit " << this->getName() << " has been constructed" << std::endl;
};

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->setHP(100);
	this->setEP(100);
	this->setAP(30);
	std::cout << "FragTrap unit " << this->getName() << " has been constructed" << std::endl;
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

void	FragTrap::attack(const std::string& target)
{
	if (this->getHP() > 0 && this->getEP() > 0)
	{
		std::cout << "FragTrap " << this->getName() << " attacks " << target \
		<< ", causing " << this->getAP() << " points of damage" << std::endl;
		this->setEP(this->getEP() - 1);
	}
	else if (this->getEP() > 0)
		std::cout << "FragTrap " << this->getName() << " is out of energy and cannot attack anyone" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is dead and cannot attack anyone" << std::endl;
};

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " is requesting for some high fives, don't leave it hanging" << std::endl;
};
