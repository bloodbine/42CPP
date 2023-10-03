/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:53:41 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/03 16:30:39 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap unit " << _name << " has been constructed" << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap unit " << _name << " has been destructed" << std::endl;
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
		this->setName(obj.getName());
	return *this;
};

void	ClapTrap::attack(const std::string& target)
{
	if (this->getHP() > 0 && this->getEP() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " attacks " << target \
		<< ", causing " << this->getAP() << " points of damage" << std::endl;
		this->setEP(this->getEP() - 1);
	}
	else if (this->getEP() > 0)
		std::cout << "ClapTrap" << _name << " is out of energy and cannot attack anyone" << std::endl;
	else
		std::cout << "ClapTrap" << _name << " is dead and cannot attack anyone" << std::endl;
};

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHP() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " takes " << amount << " points of damage" << std::endl;
		this->setHP(this->getHP() - amount);
		if (this->getHP() <= 0)
			std::cout << "ClapTrap " << this->getName() << " died a horrible death" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is already dead, leave the poor guy to rest" << std::endl;
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHP() > 0 && this->getEP() > 0)
	{
		std::cout << "ClapTrap " << this->getName() << " repaired itself for " << amount << " of hit points" << std::endl;
		this->setHP(this->getHP() + amount);
	}
	else
		std::cout << "ClapTrap " << this->getName() << " is dead so it cannot repair itself" << std::endl;
};

void	ClapTrap::setName(std::string name) {this->_name = name;};

void	ClapTrap::setHP(int HP) {this->_hit_points = HP;};

void	ClapTrap::setEP(int EP) {this->_energy_points = EP;};

void	ClapTrap::setAP(int AP) {this->_attack_damage = AP;};

std::string	ClapTrap::getName(void) const {return(this->_name);};

int		ClapTrap::getHP(void) const {return(this->_hit_points);};

int		ClapTrap::getEP(void) const {return(this->_energy_points);};

int		ClapTrap::getAP(void) const {return(this->_attack_damage);};
