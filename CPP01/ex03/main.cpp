/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 16:27:10 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/23 11:50:52 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon club1 = Weapon("crude spiked club");
	HumanA bob("Bob", club1);
	bob.attack();
	club1.setType("some other type of club");
	bob.attack();

	Weapon club2 = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club2);
	jim.attack();
	club2.setType("some other type of club");
	jim.attack();
	return 0;
};
