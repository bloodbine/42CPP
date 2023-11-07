/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:44:56 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/07 15:21:38 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form():
_name("DefaultForm"),
_signed(false),
_signgrade(150),
_execgrade(100)
{
	std::cout << "Form standard constructor called" << std::endl;
};

Form::Form(std::string name, int signgrade, int execgrade):
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

Form::Form(const Form& obj):
_name(obj._name),
_signed(obj._signed),
_signgrade(obj._signgrade),
_execgrade(obj._execgrade)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = obj;
};

Form&	Form::operator=(const Form& obj)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_signed = obj._signed;
	return (*this);
};

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
};

std::string	Form::getName() const {return(this->_name);};
bool			Form::getSigned() const {return(this->_signed);};
int			Form::getSignGrade() const {return(this->_signgrade);};
int			Form::getExecGrade() const {return(this->_execgrade);};
void		Form::setSigned(bool status) {this->_signed = status;};

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signgrade)
		throw Bureaucrat::GradeTooLowException();
	bureaucrat.signForm(*this);
};

std::ostream &operator<<(std::ostream &out, const Form& obj)
{
	out << "Form " << obj.getName();
	if (obj.getSigned())
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
