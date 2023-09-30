/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:31:12 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/30 16:40:28 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "An annoying robot called Harl has been created." << std::endl;
};

Harl::~Harl()
{
	std::cout << "The annoying robot Harl has been put out of our misery." << std::endl;
};

void	Harl::debug(void)
{
	std::cout << DEBUG_MSG << std::endl;
};

void	Harl::info(void)
{
	std::cout << INFO_MSG << std::endl;
};

void	Harl::warning(void)
{
	std::cout << WARNING_MSG << std::endl;
};

void	Harl::error(void)
{
	std::cout << ERROR_MSG << std::endl;
};

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*func)(void);
	int	i = -1;
	while (++i < 4 && level.compare(levels[i]) != 0);
	switch(i)
	{
		case 0:
			func = &Harl::debug;
			break;
		case 1:
			func = &Harl::info;
			break;
		case 2:
			func = &Harl::warning;
			break;
		case 3:
			func = &Harl::error;
			break;
		default:
			std::cout << MISC_MSG << std::endl;
			return;
	}
	(this->*func)();
};
