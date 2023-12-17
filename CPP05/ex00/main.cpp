/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:08:14 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/17 13:25:23 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat defJohn = Bureaucrat();
		std::cout << defJohn << std::endl;
		defJohn.lowerGrade();
	}
	catch(std::exception & e)
	{std::cout << "defJohn " << e.what() << std::endl;};

	try
	{
		Bureaucrat Michael = Bureaucrat("Michael", 1);
		std::cout << Michael << std::endl;
		Michael.raiseGrade();
	}
	catch(std::exception & e)
	{std::cout << "Michael " << e.what() << std::endl;};

	return (0);
};
