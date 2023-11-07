/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:08:14 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/07 15:50:18 by gpasztor         ###   ########.fr       */
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
	// Presidential Pardon
	AForm* Presidential = new PresidentialPardonForm("Richard Nixon");
	Presidential->beSigned(Harvey);
	Harvey.executeForm(*Presidential);
	//Robotomy Request
	AForm* Robotomy = new RobotomyRequestForm("Bender");
	Robotomy->beSigned(Harvey);
	Harvey.signForm(*Robotomy);
	// Shrubbery Creation
	AForm* Shrubbery = new ShrubberyCreationForm("Garden");
	Shrubbery->beSigned(Harvey);
	Harvey.signForm(*Shrubbery);
	// Unsigned error
	AForm* UnsignedPresidential = new PresidentialPardonForm("Donald Trump");
	Harvey.executeForm(*UnsignedPresidential);
	// Grade too low error
	AForm* AnotherPresidential = new PresidentialPardonForm("A Moose");
	UnsignedPresidential->beSigned(Harvey);
	Jimmy.executeForm(*UnsignedPresidential);
	// Memory management
	delete Presidential;
	delete Robotomy;
	delete Shrubbery;
	delete UnsignedPresidential;
	delete AnotherPresidential;
	return (0);
};
