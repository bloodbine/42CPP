/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:30:30 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/25 18:18:44 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const	Animal* animal = new Animal();
	const	Cat*	cat = new Cat();
	const	Dog*	dog = new Dog();
	const	Animal*	dogptr = dog;

	std::cout << "--------------------" << std::endl;

	std::cout << animal->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << dogptr->getType() << std::endl;

	std::cout << "--------------------" << std::endl;

	animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	dogptr->makeSound();

	std::cout << "--------------------" << std::endl;

	delete animal;
	delete cat;
	delete dog;

	std::cout << "--------------------" << std::endl;

	const	WrongAnimal* wronganimal = new WrongAnimal();
	const	WrongCat* wrongcat = new WrongCat();
	const	WrongAnimal* wrongcatptr = wrongcat;

	std::cout << "--------------------" << std::endl;

	std::cout << wronganimal->getType() << std::endl;
	std::cout << wrongcat->getType() << std::endl;
	std::cout << wrongcatptr->getType() << std::endl;

	std::cout << "--------------------" << std::endl;

	wronganimal->makeSound();
	wrongcat->makeSound();
	wrongcatptr->makeSound();

	std::cout << "--------------------" << std::endl;

	delete wronganimal;
	delete wrongcat;

	return (0);
};
