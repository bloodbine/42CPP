/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:19:16 by gpasztor          #+#    #+#             */
/*   Updated: 2023/08/08 16:19:19 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int	i = 0, j = 1;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			std::cout << (char)std::toupper(argv[j][i]);
			i++;
		}
		i = 0;
		j++;
	}
	std::cout << std::endl;
	return (0);
}
