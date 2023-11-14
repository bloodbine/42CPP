/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:28:45 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/14 16:50:07 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(void)
{
	Array<int> testInt = Array<int>(5);
	std::cout << "Size of testInt array: " << testInt.size() << std::endl;
	testInt[4] = 5;
	std::cout << "Fourth element of testInt: " << testInt[4] << std::endl;

	try {std::cout << testInt[6] << std::endl;}
	catch (std::exception &e) {std::cout << "testInt array: " << e.what() << std::endl;}

	std::cout << "--------------------" << std::endl;

	Array<std::string> testString = Array<std::string>(10);

	std::cout << "Size of testInt array: " << testString.size() << std::endl;
	testString[8] = "Cookie";
	std::cout << "Eighth element of testInt: " << testString[8] << std::endl;

	try {std::cout << testString[11] << std::endl;}
	catch (std::exception &e) {std::cout << "testString array: " << e.what() << std::endl;}

	return (0);
};
