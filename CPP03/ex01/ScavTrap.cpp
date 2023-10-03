/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:33:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/03 16:10:17 by gpasztor         ###   ########.fr       */
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

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode" << std::endl;
};
