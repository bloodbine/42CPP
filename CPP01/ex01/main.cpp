/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:55:23 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/23 11:17:13 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *Horde = zombieHorde(50, "Fred");
	for (int i = 0; i < 50; i++)
		Horde[i].announce();
	delete[] Horde;
	return (0);
};
