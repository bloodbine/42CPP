/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:53:41 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/06 11:01:17 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("DefTrap"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap unit " << this->_name << " has been constructed" << std::endl;
};

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap unit " << this->_name << " has been constructed" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap unit " << this->_name << " has been destructed" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
};

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_name = (obj.getName());
	return *this;
};

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target \
		<< ", causing " << this->_energy_points << " points of damage" << std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points > 0)
		std::cout << "ClapTrap" << this->_name << " is out of energy and cannot attack anyone" << std::endl;
	else
		std::cout << "ClapTrap" << this->_name << " is dead and cannot attack anyone" << std::endl;
};

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
		this->_hit_points -= amount;
		if (this->_hit_points <= 0)
			std::cout << "ClapTrap " << this->_name << " died a horrible death" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead, leave the poor guy to rest" << std::endl;
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repaired itself for " << amount << " of hit points" << std::endl;
		this->_hit_points += amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead so it cannot repair itself" << std::endl;
};

std::string	ClapTrap::getName(void) const {return(this->_name);};

int		ClapTrap::getHP(void) const {return(this->_hit_points);};

int		ClapTrap::getEP(void) const {return(this->_energy_points);};

int		ClapTrap::getAP(void) const {return(this->_attack_damage);};
