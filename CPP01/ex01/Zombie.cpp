/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:55:57 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/29 15:29:14 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "A Zombie has risen from the dead" << std::endl;
};

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << _name << " has come to life" << std::endl;
};

Zombie::~Zombie(void)
{
	std::cout << _name << " has returned to its grave" << std::endl;
};

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void	Zombie::set_name(std::string name)
{
	this->_name = name;
};