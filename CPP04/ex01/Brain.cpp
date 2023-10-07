/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:44:26 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/07 15:26:33 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain standard constructor called" << std::endl;
};

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
};

Brain& Brain::operator=(const Brain& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
};

Brain::~Brain()
{
	std::cout << "Brain standard destructor called" << std::endl;
};

void	Brain::fillBrain(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
};

std::string	Brain::getIdea(int index)
{
	if (index < 0 || index > 100)
	{
		std::cout << "This animal's brain cannot contain an idea at index " << index << std::endl;
		return ("");
	}
	return (this->_ideas[index]);
};

void	Brain::listIdeas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << this->_ideas[i] << std::endl;
};
