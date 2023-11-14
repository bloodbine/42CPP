/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:05:25 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/14 12:15:52 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename var> void addStar(const var& obj) {std::cout << (obj + '*') << " ";};

int	main(void)
{
	int numList[10] = {0, 1, 2, 3, 4, 5, 6, 7 ,8 ,9};
	for (int i = 0; i < 10; i++)
		std::cout << numList[i] << " ";
	std::cout << std::endl;
	::iter(numList, 10, addStar);
		std::cout << std::endl;

	std::string stringList[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	for (int i = 0; i < 10; i++)
		std::cout << stringList[i] << " ";
	std::cout << std::endl;
	::iter(stringList, 10, addStar);
	std::cout << std::endl;

	return (0);
};
