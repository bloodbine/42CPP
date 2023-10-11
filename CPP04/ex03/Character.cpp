/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:28:52 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/11 12:45:43 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(): _name("Random dude"), _index(0)
{
	this->_inventory[0] = nullptr;
	this->_inventory[1] = nullptr;
	this->_inventory[2] = nullptr;
	this->_inventory[3] = nullptr;
	std::cout << "Character standard constructor called" << std::endl;
};

Character::Character(std::string name): _name(name), _index(0)
{
	this->_inventory[0] = nullptr;
	this->_inventory[1] = nullptr;
	this->_inventory[2] = nullptr;
	this->_inventory[3] = nullptr;
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
		this->unequip(i);
};

std::string	const & Character::getName() const
{
	return (this->_name);
};

void	Character::equip(AMateria* m)
{
	if (this->_index < 4 && m != nullptr)
	{
		this->_inventory[this->_index] = m;
		this->_index++;
	}
};

void	Character::unequip(int idx)
{
	AMateria*	discarded;

	if (idx >= 0 && idx < 4 && this->_inventory[idx] != nullptr)
	{
		discarded = this->_inventory[idx];
		this->_inventory[idx] = nullptr;
		this->_index--;
	}
};

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != nullptr)
		this->_inventory[idx]->use(target);
};
