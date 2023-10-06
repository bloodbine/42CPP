/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 11:43:12 by gpasztor         ###   ########.fr       */
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
		this->_name = obj.getName();
		this->_hit_points = obj.getHP();
		this->_energy_points = obj.getEP();
		this->_attack_damage = obj.getAP();
	}
	return (*this);
};

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points > 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy and cannot attack anyone" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is dead and cannot attack anyone" << std::endl;
};

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
};
