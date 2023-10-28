/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@42heilbronn.student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 09:30:00 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/28 10:54:17 by gpasztor         ###   ########.fr       */
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
		bool			getSigned() const;
		int			getSignGrade() const;
		int			getExecGrade() const;

		void				beSigned(Bureaucrat& bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form& obj);

#endif