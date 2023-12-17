/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:08:14 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/17 14:15:01 by gpasztor         ###   ########.fr       */
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
	{std::cout << "Afton " << e.what() << std::endl;};

	return (0);
};
