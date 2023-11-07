/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:46:28 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/07 15:16:17 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = obj;
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
};

const char * ShrubberyCreationForm::FormCannotCreateShrubberyException::what() const throw()
{
	return ("Executor failed to create shrubbery (Cannot open file)");
};

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormUnsignedException();
	if (this->getExecGrade() < executor.getGrade())
		throw AForm::FormGradeTooHighException();
	std::ofstream file;
	file.open((this->_target + "_shrubbery"));
	if (file.is_open())
	{
		for (int i = 0; i < 5; i++)
			file << ASCII_TREE << std::endl;
	}
	else
		throw ShrubberyCreationForm::FormCannotCreateShrubberyException();
};
