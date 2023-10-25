/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:01:10 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 15:47:45 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	BestTrap("bestie");

	std::cout << "bestie's starting HP: " << BestTrap.getHP() << std::endl;
	std::cout << "bestie's starting EP: " << BestTrap.getEP() << std::endl;
	std::cout << "bestie's starting AP: " << BestTrap.getAP() << std::endl;

	BestTrap.attack("Random raider");
	BestTrap.takeDamage(5);
	BestTrap.beRepaired(5);
	BestTrap.takeDamage(10);
	BestTrap.whoAmI();
	BestTrap.takeDamage(200);

	std::cout << "bestie's final HP: " << BestTrap.getHP() << std::endl;
	std::cout << "bestie's final EP: " << BestTrap.getEP() << std::endl;
	std::cout << "bestie's final AP: " << BestTrap.getAP() << std::endl;

	return (0);
};
