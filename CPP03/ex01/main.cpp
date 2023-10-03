/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:01:10 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/03 16:20:05 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavvie("scavvie");

	scavvie.attack("Random raider");
	scavvie.takeDamage(5);
	scavvie.beRepaired(5);
	scavvie.takeDamage(10);
	scavvie.guardGate();
	scavvie.takeDamage(200);
};
