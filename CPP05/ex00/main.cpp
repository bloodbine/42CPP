/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@42heilbronn.student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:08:14 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/28 09:28:29 by gpasztor         ###   ########.fr       */
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
	{
		std::cout << "defJohn " << e.what() << std::endl;
		return (1);
	};

	try
	{
		Bureaucrat Michael = Bureaucrat("Michael", 1);
		std::cout << Michael << std::endl;
		Michael.raiseGrade();
	}
	catch(std::exception & e)
	{
		std::cout << "Michael " << e.what() << std::endl;
		return (1);
	};

	return (0);
};
