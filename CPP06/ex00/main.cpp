/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:45:02 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/17 16:23:07 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
		return (0);
	}
	std::cerr << "Invalid argument count" << std::endl;
	return (1);
};
