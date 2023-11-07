/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:46:21 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/07 15:32:05 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = obj;
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
};

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormUnsignedException();
	if (this->getExecGrade() < executor.getGrade())
		throw AForm::FormGradeTooHighException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};
