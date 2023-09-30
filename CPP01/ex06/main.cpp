/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:25:55 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/30 17:13:23 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl AnnoyingRobot;

	if (argc != 2)
	{
		std::cerr << "[ You have given Harl either too much or too little to complain about ]" << std::endl;
		return (0);
	}
	AnnoyingRobot.complain(argv[1]);
	return (0);
};
