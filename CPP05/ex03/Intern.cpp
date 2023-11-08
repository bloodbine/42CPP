/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:51:18 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/08 11:31:31 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern standard constructor called" << std::endl;
};

Intern::Intern(const Intern& obj)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	(void)(obj);
	return (*this);
};

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
};

const char * Intern::InvalidFormType::what() const throw()
{
	return ("Invalid Form type");
};

AForm*	Intern::makeForm(std::string type, std::string target)
{
	std::string types[3] = {"presidential pardon","robotomy request", "shrubbery creation"};
	int i = -1;
	while (i < 3 && type.compare(types[++i]) != 0);
	switch (i)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default:
			throw Intern::InvalidFormType();
	}
};
