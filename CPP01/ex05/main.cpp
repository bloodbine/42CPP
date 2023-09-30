/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:25:55 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/30 16:27:21 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl AnnoyingRobot;

	AnnoyingRobot.complain("DEBUG");
	AnnoyingRobot.complain("INFO");
	AnnoyingRobot.complain("WARNING");
	AnnoyingRobot.complain("ERROR");
	AnnoyingRobot.complain("Cookie");
	return (0);
};