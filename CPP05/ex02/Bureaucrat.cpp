/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@42heilbronn.student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:31:01 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/28 10:45:29 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Too high grade given to Bureaucrat");
};

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Too low grade given to Bureaucrat");
};

Bureaucrat::Bureaucrat(): _name("Default John"), _grade(150)
{
	std::cout << "Bureaucrat standard constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
};

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	std::cout << "Bureacrat copy constructor called" << std::endl;
	*this = obj;
};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
		this->_grade = obj._grade;
	return (*this);
};

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
};

void	Bureaucrat::raiseGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
};

void	Bureaucrat::lowerGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
};

void	Bureaucrat::signForm(Form &form)
{
	if (form.getSigned() == true)
	{
		std::cout << this->getName() << " cannot sign " << form.getName();
		std::cout << " because it is already signed" << std::endl;
	}
	else if (this->_grade <= form.getSignGrade())
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
	{
		std::cout << this->getName() << " cannot sign " << form.getName();
		std::cout << " because he/she lacks authority to do so"  << std::endl;
	}
};

const std::string Bureaucrat::getName() const {return (this->_name);};
int	Bureaucrat::getGrade() const {return (this->_grade);};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& obj)
{
	out << obj.getName() << ", Bureaucrat grade " << obj.getGrade();
	return out;
};
