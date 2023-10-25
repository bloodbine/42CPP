/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:45:25 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 16:14:21 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "DefTrap";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	std::cout << "DiamondTrap unit " << this->_name << " has been constructed" << std::endl;
};

DiamondTrap::DiamondTrap(std::string name): ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	std::cout << "DiamondTrap unit " << this->_name << " has been constructed" << std::endl;
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap unit " << this->_name << " has been destructed" << std::endl;
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
		this->_name = obj._name;
		this->ClapTrap::_name = obj.ClapTrap::_name;
		this->_hit_points = obj._hit_points;
		this->_energy_points = obj._energy_points;
		this->_attack_damage = obj._attack_damage;
		std::cout << "DiamondTrap unit " << this->_name << " has been constructed" << std::endl;
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
	<< ", originally made as ClapTrap unit " << this->ClapTrap::_name << std::endl;
};

int		DiamondTrap::getHP(void) const {return(this->_hit_points);};

int		DiamondTrap::getEP(void) const {return(this->_energy_points);};

int		DiamondTrap::getAP(void) const {return(this->_attack_damage);};
