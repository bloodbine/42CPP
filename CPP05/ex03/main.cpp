/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:08:14 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/08 11:29:41 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat Harvey = Bureaucrat("Harvey", 5);
	Bureaucrat Jimmy = Bureaucrat("Jimmy", 100);
	Intern someIntern = Intern();
	std::cout << "------------------------------------------------------------" << std::endl;
	// Presidential Pardon
	AForm* Presidential = someIntern.makeForm("presidential pardon", "Richard Nixon");
	Presidential->beSigned(Harvey);
	Harvey.executeForm(*Presidential);
	std::cout << "------------------------------------------------------------" << std::endl;
	//Robotomy Request
	AForm* Robotomy = someIntern.makeForm("robotomy request", "Bender");
	Robotomy->beSigned(Harvey);
	Harvey.executeForm(*Robotomy);
	std::cout << "------------------------------------------------------------" << std::endl;
	// Shrubbery Creation
	AForm* Shrubbery = someIntern.makeForm("shrubbery creation", "Garden");
	Shrubbery->beSigned(Harvey);
	Harvey.executeForm(*Shrubbery);
	std::cout << "------------------------------------------------------------" << std::endl;
	try
	{
		AForm* Misc = someIntern.makeForm("cookie recipe", "Cookie monster");
		Misc->beSigned(Jimmy);
		Jimmy.executeForm(*Misc);
	}
	catch (std::exception & e)
	{std::cout << "Intern cannot create form because: " << e.what() << std::endl;}
	// Memory management
	delete Presidential;
	delete Robotomy;
	delete Shrubbery;
	return (0);
};
