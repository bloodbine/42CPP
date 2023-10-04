/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:45:25 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/04 16:10:20 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(), _name("DefDiaTrap")
{
	this->ClapTrap::setName(this->getName() + "_clap_name");
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