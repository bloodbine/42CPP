/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:01:10 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/03 16:39:00 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Fraggie("Fraggie");

	Fraggie.attack("Random raider");
	Fraggie.takeDamage(5);
	Fraggie.beRepaired(5);
	Fraggie.takeDamage(10);
	Fraggie.highFivesGuys();
	Fraggie.takeDamage(200);
};
