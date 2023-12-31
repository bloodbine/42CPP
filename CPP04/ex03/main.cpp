/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:32:10 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 19:10:08 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int	main(void)
{
	MateriaSource*	src = new MateriaSource();
	Character*		me = new Character("Warrior of Light");
	Character*		enemy = new Character("Zenos");

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));

	me->use(0, *enemy);
	me->use(1, *me);

	me->unequip(0);
	me->unequip(1);

	delete src;
	delete me;
	delete enemy;

	return (0);
};
