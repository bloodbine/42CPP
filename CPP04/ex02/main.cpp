/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:30:30 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/07 16:01:34 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal*	Animals[10];

	for (int i = 0; i < 5; i++)
		Animals[i] = new Cat();

	std::cout << "--------------------" << std::endl;

	for (int j = 5; j < 10; j++)
		Animals[j] = new Dog();

	std::cout << "--------------------" << std::endl;

	std::cout << ((Cat*)Animals[0])->getIdea(0) << std::endl;
	std::cout << ((Dog*)Animals[5])->getIdea(0) << std::endl;

	// ((Cat*)Animals[0])->listIdeas();
	// ((Dog*)Animals[5])->listIdeas();

	std::cout << "--------------------" << std::endl;

	for (int k = 0; k < 10; k++)
		delete Animals[k];

	// Animal*	AbstractTest = new Animal();

	return (0);
};

// return (system("leaks Idontwanttotsettheworldonfire"));
