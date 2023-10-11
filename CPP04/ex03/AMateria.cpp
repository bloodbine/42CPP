/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:58:11 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/09 15:59:26 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
};

AMateria::AMateria(const AMateria& obj)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = obj;
};

AMateria& AMateria::operator=(const AMateria& obj)
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
};

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
};

std::string const &	AMateria::getType(void) const
{
	return (this->_type);
};

void	AMateria::use(ICharacter& target)
{
	std::cout << "* tries to use an unknown materia on " << target.getName() << " but it fails" << std::endl;
};
