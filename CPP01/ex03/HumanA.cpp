/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:27:20 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/29 17:28:13 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{
	std::cout << "HumanA " << _name << " wielding " << _weapon.getType() << " created" << std::endl;
};

HumanA::~HumanA()
{
	std::cout << "HumanA " << _name << " destroyed" << std::endl;
};

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their weapon " << _weapon.getType() << std::endl;
};
