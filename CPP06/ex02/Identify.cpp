/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:59:33 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/12 15:19:55 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <exception>
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate(void)
{
	std::srand(std::time(NULL));
	switch((std::rand() % 3))
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			std::cout << "Error during generation" << std::endl;
			return (NULL);
	}
};

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type identified: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type identified: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type identified: C" << std::endl;
	else
		std::cout << "Unable to identify type" << std::endl;
};

void identify(Base& p)
{
	try {(void)dynamic_cast<A&>(p); std::cout << "Type Identified: A" << std::endl; return;}
	catch (std::exception &e) {}
	try {(void)dynamic_cast<B&>(p); std::cout << "Type Identified: B" << std::endl; return;}
	catch (std::exception &e) {}
	try {(void)dynamic_cast<C&>(p); std::cout << "Type Identified: C" << std::endl; return;}
	catch (std::exception &e) {}
	std::cout << "Unable to identify type" << std::endl;
};