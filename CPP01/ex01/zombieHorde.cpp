/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 14:46:50 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/29 15:20:57 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int n, std::string name)
{
	Zombie* Horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		Horde[i].set_name((name + std::to_string(i)));
	return (Horde);
};
