/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:44:12 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 18:56:12 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria*	_inventory[4];
		AMateria*	_discarded[100];
		size_t		_discardindex;
		size_t		_index;

	public:
		Character();
		Character(std::string name);
		Character(const Character& obj);
		Character& operator=(const Character& obj);
		virtual ~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif