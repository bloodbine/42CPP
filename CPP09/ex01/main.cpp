/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 12:28:06 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/09 14:57:02 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 1)
	{
		try
		{
			ReversePolishNotation rpn(argv[1]);
			rpn.Calculate();
			rpn.DisplayResult();
		}
		catch (std::exception &e)
		{std::cout << e.what() << std::endl;}
	}
	return (0);
};
