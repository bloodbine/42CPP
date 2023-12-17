/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:30:00 by gpasztor          #+#    #+#             */
/*   Updated: 2023/12/17 14:05:36 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const	int			_signgrade;
		const	int			_execgrade;

	public:
		Form();
		Form(std::string name, int signgrade, int execgrade);
		Form(const Form &obj);
		Form& operator=(const Form &obj);
		~Form();

		std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void		setSigned(bool status);

		void		beSigned(Bureaucrat& bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form& obj);

#endif