/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:40:29 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/11 16:35:00 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		~Bureaucrat();


		const std::string	getName() const;
		int					getGrade() const;

		void				raiseGrade();
		void				lowerGrade();

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat& obj);

#endif