/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@42heilbronn.student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:30:00 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/05 22:59:59 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const	int			_signgrade;
		const	int			_execgrade;
	
	public:
		AForm();
		AForm(std::string name, int signgrade, int execgrade);
		AForm(const AForm &obj);
		AForm& operator=(const AForm &obj);
		virtual ~AForm();

		virtual std::string	getName() const;
		virtual bool		getSigned() const;
		virtual int			getSignGrade() const;
		virtual int			getExecGrade() const;

		virtual void		beSigned(Bureaucrat& bureaucrat);
		virtual void		execute(Bureaucrat const& executor);
};

std::ostream &operator<<(std::ostream &out, const AForm& obj);

#endif