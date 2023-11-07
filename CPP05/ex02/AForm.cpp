/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@42heilbronn.student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:44:56 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/05 23:10:17 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

AForm::AForm():
_name("DefaultForm"),
_signed(false),
_signgrade(150),
_execgrade(100)
{
	std::cout << "Form standard constructor called" << std::endl;
};

AForm::AForm(std::string name, int signgrade, int execgrade):
_name(name),
_signed(false),
_signgrade(signgrade),
_execgrade(execgrade)
{
	std::cout << "Form constructor called" << std::endl;
	if (signgrade > 150 || execgrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (signgrade < 1 || execgrade < 1)
		throw Bureaucrat::GradeTooHighException();
};

AForm::AForm(const AForm& obj):
_name(obj._name),
_signed(obj._signed),
_signgrade(obj._signgrade),
_execgrade(obj._execgrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = obj;
};

AForm&	AForm::operator=(const AForm& obj)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
};

AForm::~AForm()
{
	std::cout << "Form destructor called" << std::endl;
};

std::string	AForm::getName() const {return(this->_name);};
bool			AForm::getSigned() const {return(this->_signed);};
int			AForm::getSignGrade() const {return(this->_signgrade);};
int			AForm::getExecGrade() const {return(this->_execgrade);};

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signgrade)
		throw Bureaucrat::GradeTooLowException();
	bureaucrat.signForm(*this);
};

void	AForm::execute(const Bureaucrat &executor)
{
	if (this->_execgrade < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	if (this->_name.compare("PresidentialPardonForm") == 0)
		PresidentialPardonForm::execute(executor);
	else if (this->_name.compare("RobotomyRequestForm") == 0)
		RobotomyRequestForm::execute(executor);
	else if (this->_name.compare("ShrubberyCreationForm") == 0)
		ShrubberyCreationForm::execute(executor);
};

std::ostream &operator<<(std::ostream &out, const AForm& obj)
{
	out << "Form " << obj.getName();
	if (obj.getSigned() == true)
	{
		std::cout << " status: signed,";
		std::cout << " execution level: " << obj.getExecGrade();
		return (out);
	}
		std::cout << " status: unsigned,";
		std::cout << " signature level: " << obj.getSignGrade() << ",";
		std::cout << " execution level: " << obj.getExecGrade();
	return (out);
};
