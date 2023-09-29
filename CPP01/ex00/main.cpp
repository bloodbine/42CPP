/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:55:48 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/29 14:40:30 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie Fred = Zombie("Fred");
	Fred.announce();
	randomChump("Frederick");
	Zombie *Fredericka = newZombie("Fredericka");
	Fredericka->announce();
	delete Fredericka;
	return (0);
};

	// return (system("leaks BraiiiiiiinnnzzzZ"));