/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:27:08 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/29 17:26:53 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << "Weapon " << _type << " created" << std::endl;
};

Weapon::~Weapon()
{
	std::cout << "Weapon " << _type << " destroyed" << std::endl;
};

void	Weapon::setType(std::string type)
{
	this->_type = type;
};

const std::string&	Weapon::getType(void)
{
	const std::string& weaponRef = _type;
	return (weaponRef);
};
