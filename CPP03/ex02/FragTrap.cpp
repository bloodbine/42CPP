/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 14:11:56 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap unit " << this->_name << " has been constructed" << std::endl;
};

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap unit " << this->_name << " has been constructed" << std::endl;
};

FragTrap::~FragTrap()
{
	std::cout << "FragTrap unit " << this->_name << " has been destructed" << std::endl;
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
		this->_name = obj._name;
		this->_hit_points = obj._hit_points;
		this->_energy_points = obj._energy_points;
		this->_attack_damage = obj._attack_damage;
	}
	return (*this);
};

void	FragTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0)
		std::cout << "FragTrap " << this->_name << " is dead and cannot attack" << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "FragTrap " << this->_name << " is out of energy and cannot attack" << std::endl;
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target\
		<< " causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_energy_points--;
	}
};

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is requesting for some high fives, don't leave it hanging" << std::endl;
};
