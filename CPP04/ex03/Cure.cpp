/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:56:50 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/11 12:44:32 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure standard constructor called" << std::endl;
};

Cure::Cure(const Cure& obj): AMateria(obj)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = obj;
};

Cure&	Cure::operator=(const Cure& obj)
{
	std::cout << "Cure copy assignment operator called" << std::endl;
	(void)(obj);
	return (*this);
};

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
};

AMateria&	Cure::clone() const
{
	return (*(new Cure()));
};

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
};
