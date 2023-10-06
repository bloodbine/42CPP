/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 11:35:52 by gpasztor         ###   ########.fr       */
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
		this->_name = obj.getName();
		this->_hit_points = obj.getHP();
		this->_energy_points = obj.getEP();
		this->_attack_damage = obj.getAP();
	}
	return (*this);
};

void	FragTrap::attack(const std::string& target)
{
	if (this->_hit_points > 0 && this->getEP() > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points > 0)
		std::cout << "FragTrap " << this->_name << " is out of energy and cannot attack anyone" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " is dead and cannot attack anyone" << std::endl;
};

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is requesting for some high fives, don't leave it hanging" << std::endl;
};
