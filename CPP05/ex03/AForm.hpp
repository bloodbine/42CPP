/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:30:00 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/07 15:19:31 by gpasztor         ###   ########.fr       */
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

		virtual void		setSigned(bool status);

		virtual void		beSigned(Bureaucrat& bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;

		class FormUnsignedException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class FormGradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const AForm& obj);

#endif