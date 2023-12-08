/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:10:10 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/08 15:59:18 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		BitcoinExchange Exchange = BitcoinExchange();
		Exchange.CalculateExchange(argv[1]);
	}
	else
		std::cerr << "Error: Could not open file." << std::endl;
	return (0);
};
