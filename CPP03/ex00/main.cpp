/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:01:10 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/03 15:02:25 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clappie("clappie");

	clappie.attack("Random raider");
	clappie.takeDamage(5);
	clappie.beRepaired(5);
	clappie.takeDamage(10);
};
