/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:16 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 17:35:27 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*	_brain;

	public:
		Dog();
		Dog(const Dog& obj);
		Dog& operator=(const Dog& obj);
		virtual ~Dog();

		virtual void	makeSound(void) const;
		void	listIdeas(void);
		std::string	getIdea(int	index = 0);
};

#endif