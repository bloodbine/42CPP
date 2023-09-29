/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:59:40 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/27 16:08:55 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <cstring>

Account::Account(int initial_deposit)
{
	
};

Account::~Account(void)
{
	
};

static void	Account::_displayTimestamp( void )
{
	time_t	rawtime = std::time();
	char	*rawstamp = std::ctime(&rawtime);
	std::cout << rawstamp << std::endl;
};
