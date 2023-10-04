/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/04 12:44:20 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap unit " << this->getName() << " has been constructed" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAP(20);
};

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap unit " << this->getName() << " has been destructed" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
};

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
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

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHP() > 0 && this->getEP() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target \
		<< ", causing " << this->getAP() << " points of damage" << std::endl;
		this->setEP(this->getEP() - 1);
	}
	else if (this->getEP() > 0)
		std::cout << "ScavTrap " << _name << " is out of energy and cannot attack anyone" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is dead and cannot attack anyone" << std::endl;
};

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
};
