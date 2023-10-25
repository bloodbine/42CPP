/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:45:53 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 18:13:22 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource: IMateriaSource
{
	private:
		AMateria*	_materias[4];
		size_t		_index;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& obj);
		MateriaSource&	operator=(const MateriaSource& obj);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif