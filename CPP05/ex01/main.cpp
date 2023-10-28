/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@42heilbronn.student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:08:14 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/28 10:58:05 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Afton = Bureaucrat("Afton", 100);
		std::cout << Afton << std::endl;

		Form Loan("Loan #5426", 120, 130);
		std::cout << Loan << std::endl;
		Loan.beSigned(Afton);
		std::cout << Loan << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Afton " << e.what() << std::endl;
		return (1);
	};

	return (0);
};
