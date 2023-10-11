/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:56:57 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/11 12:44:48 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice standard constructor called" << std::endl;
};

Ice::Ice(const Ice& obj): AMateria(obj)
{
	std::cout << "Ice copy constructor called" << std::endl;
	*this = obj;
};

Ice&	Ice::operator=(const Ice& obj)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	(void)(obj);
	return (*this);
};

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
};

AMateria&	Ice::clone() const
{
	return (*(new Ice));
};

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
};
