/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 15:29:21 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap unit " << this->_name << " has been constructed" << std::endl;
};

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap unit " << this->_name << " has been constructed" << std::endl;
};

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap unit " << this->_name << " has been destructed" << std::endl;
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
		this->_name = obj._name;
		this->_hit_points = obj._hit_points;
		this->_energy_points = obj._energy_points;
		this->_attack_damage = obj._attack_damage;
	}
	return (*this);
};

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead and cannot attack" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy and cannot attack" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target\
		<< " causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_energy_points--;
	}
};

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
};
