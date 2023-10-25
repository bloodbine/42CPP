/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:46:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 18:13:54 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice& obj);
		Ice& operator=(const Ice& obj);
		virtual ~Ice();

		virtual AMateria& clone() const;
		virtual void use(ICharacter& target);
};

#endif