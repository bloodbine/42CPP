/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:46:24 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/07 15:16:13 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = obj;
};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
};

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormUnsignedException();
	if (this->getExecGrade() < executor.getGrade())
		throw AForm::FormGradeTooHighException();
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << "'s robotomy failed" << std::endl;
};
