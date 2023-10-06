/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:01:10 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/04 17:23:50 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	BestTrap;

	BestTrap.attack("Random raider");
	BestTrap.takeDamage(5);
	BestTrap.beRepaired(5);
	BestTrap.takeDamage(10);
	BestTrap.whoAmI();
	BestTrap.takeDamage(200);
};
