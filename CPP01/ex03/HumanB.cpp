/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:27:15 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/24 11:28:20 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
	std::cout << "HumanB " << _name << " created without a weapon" << std::endl;
};

HumanB::~HumanB()
{
	std::cout << "HumanB " << _name << " destroyed" << std::endl;
};

void	HumanB::attack(void)
{
	if (_weapon == NULL)
		std::cout << _name << " attacks with their fists" << std::endl;
	else
		std::cout << _name << " attacks with their weapon " << _weapon->getType() << std::endl;
};

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
};
