/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:38:50 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/08 11:14:15 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>

class	AForm;

class	Intern
{
	public:
		Intern();
		Intern(const Intern &obj);
		Intern& operator=(const Intern &obj);
		~Intern();

		AForm*	makeForm(std::string type, std::string target);

		class InvalidFormType: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
};

#endif