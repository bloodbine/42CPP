/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:45:11 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 17:33:42 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	_brain;

	public:
		Cat();
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		virtual ~Cat();

		virtual void	makeSound(void) const;
		void	listIdeas(void);
		std::string	getIdea(int	index = 0);
};

#endif