/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:47:19 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/11 12:38:49 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class	Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure& obj);
		Cure& operator=(const Cure& obj);
		~Cure();

		AMateria& clone() const;
		void use(ICharacter& target);
};

#endif