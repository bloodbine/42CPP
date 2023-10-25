/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:28:52 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 19:05:13 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): _name("Random dude"), _discardindex(0), _index(0)
{
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	for (size_t i = 0; i < 100; i++)
		this->_discarded[i] = NULL;
	std::cout << "Character standard constructor called" << std::endl;
};

Character::Character(std::string name): _name(name), _discardindex(0), _index(0)
{
	this->_inventory[0] = NULL;
	this->_inventory[1] = NULL;
	this->_inventory[2] = NULL;
	this->_inventory[3] = NULL;
	for (size_t i = 0; i < 100; i++)
		this->_discarded[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
};

Character::Character(const Character& obj)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = obj;
};

Character&	Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_index = obj._index;
		for (size_t i = 0; i < 4; i++)
			this->_inventory[i] = obj._inventory[i];
	}
	return (*this);
};

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	for (size_t i = 0; i < 100; i++)
	{
		if (this->_discarded[i] != NULL)
			delete this->_discarded[i];
	}
};

std::string	const & Character::getName() const
{
	return (this->_name);
};

void	Character::equip(AMateria* m)
{
	if (this->_index < 4 && m != NULL)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] == NULL)
			{
				this->_inventory[this->_index] = m;
				this->_index++;
				return;
			}
		}
	}
};

void	Character::unequip(int idx)
{
	if (_discardindex == 100)
	{
		std::cout << "The ground is completely cluttered with Materia, so " << this->_name << " can no longer unequip anymore" << std::endl;
	}
	else if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
	{
		this->_discarded[_discardindex] = this->_inventory[idx];
		this->_discardindex++;
		this->_inventory[idx] = NULL;
		this->_index--;
	}
};

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
};
