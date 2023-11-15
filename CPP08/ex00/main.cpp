/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:44:54 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/15 12:40:02 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"
#include <iostream>
#include <vector>
#include <array>
#include <list>

int	main(void)
{
	std::array<int, 10> arr = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
	std::vector<int> vec(arr.begin(), arr.end());
	std::list<int> lst(arr.begin(), arr.end());

	std::cout << "Array: ";
	for (size_t i = 0; i < 10; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;

	std::cout << "Vector: ";
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "List: ";
	for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << std::endl;

	std::cout << "Found in vec: " << *easyfind(vec, 25) << std::endl;
	std::cout << "Found in list: " << *easyfind(lst, 25) << std::endl;
	std::cout << "Found in array: " << *easyfind(arr, 25) << std::endl;

	std::cout << "Value after in vec: " << *(++easyfind(vec, 25)) << std::endl;
	std::cout << "Value after in list: " << *(++easyfind(lst, 25)) << std::endl;
	std::cout << "Value after in array: " << *(easyfind(arr, 25) + 1) << std::endl;

	std::cout << std::endl;

	try{easyfind(vec, 60);}
	catch(std::exception &e) {std::cout << "Error in vector easyfind: " << e.what() << std::endl;}
	try{easyfind(lst, 60);}
	catch(std::exception &e) {std::cout << "Error in list easyfind: " << e.what() << std::endl;}
	try{easyfind(arr, 60);}
	catch(std::exception &e) {std::cout << "Error in array easyfind: " << e.what() << std::endl;}
	return (0);
};