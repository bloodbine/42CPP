/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:45:25 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 10:32:34 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "DefTrap";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->setHP(this->FragTrap::getHP());
	this->setEP(this->ScavTrap::getEP());
	this->setAP(this->FragTrap::getAP());
	std::cout << "DiamondTrap unit " << this->getName() << " has been constructed" << std::endl;
};

DiamondTrap::DiamondTrap(std::string name): ClapTrap(), ScavTrap(), FragTrap(), _name(name)
{
	this->ClapTrap::setName(this->getName() + "_clap_name");
	this->setHP(this->FragTrap::getHP());
	this->setEP(this->ScavTrap::getEP());
	this->setAP(this->FragTrap::getAP());
	std::cout << "DiamondTrap unit " << this->getName() << " has been constructed" << std::endl;
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap unit " << this->getName() << " has been destructed" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap &obj): ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
	{
		this->setName(obj.getName());
		this->ClapTrap::setName(obj.ClapTrap::getName());
		this->setHP(obj.getHP());
		this->setEP(obj.getEP());
		this->setAP(obj.getAP());
		std::cout << "DiamondTrap unit " << this->getName() << " has been constructed" << std::endl;
	}
	return (*this);
};

void	DiamondTrap::attack(const std::string& target)
{
	this->ScavTrap::attack(target);
};

void	DiamondTrap::whoAmI()
{
	std::cout << "Hi, I am DiamondTrap unit " << this->_name\
	<< ", originally made as ClapTrap unit " << ClapTrap::_name << std::endl;
};
