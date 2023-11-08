/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:08:14 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/08 10:06:58 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat Harvey("Harvey", 5);
	Bureaucrat Jimmy("Jimmy", 100);
	std::cout << "------------------------------------------------------------" << std::endl;
	// Presidential Pardon
	AForm* Presidential = new PresidentialPardonForm("Richard Nixon");
	Presidential->beSigned(Harvey);
	Harvey.executeForm(*Presidential);
	std::cout << "------------------------------------------------------------" << std::endl;
	//Robotomy Request
	AForm* Robotomy = new RobotomyRequestForm("Bender");
	Robotomy->beSigned(Harvey);
	Harvey.executeForm(*Robotomy);
	std::cout << "------------------------------------------------------------" << std::endl;
	// Shrubbery Creation
	AForm* Shrubbery = new ShrubberyCreationForm("Garden");
	Shrubbery->beSigned(Harvey);
	Harvey.executeForm(*Shrubbery);
	std::cout << "------------------------------------------------------------" << std::endl;
	// Unsigned error
	AForm* UnsignedPresidential = new PresidentialPardonForm("Donald Trump");
	Harvey.executeForm(*UnsignedPresidential);
	std::cout << "------------------------------------------------------------" << std::endl;
	// Grade too low error
	AForm* AnotherPresidential = new PresidentialPardonForm("A Moose");
	UnsignedPresidential->beSigned(Harvey);
	Jimmy.executeForm(*UnsignedPresidential);
	std::cout << "------------------------------------------------------------" << std::endl;
	// Memory management
	delete Presidential;
	delete Robotomy;
	delete Shrubbery;
	delete UnsignedPresidential;
	delete AnotherPresidential;
	return (0);
};
