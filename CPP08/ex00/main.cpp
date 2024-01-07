/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:44:54 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/07 15:14:34 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
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

	std::cout << "Found in vec: " << *easyFind(vec, 25) << std::endl;
	std::cout << "Found in list: " << *easyFind(lst, 25) << std::endl;
	std::cout << "Found in array: " << *easyFind(arr, 25) << std::endl;

	std::cout << "Value after in vec: " << *(++easyFind(vec, 25)) << std::endl;
	std::cout << "Value after in list: " << *(++easyFind(lst, 25)) << std::endl;
	std::cout << "Value after in array: " << *(easyFind(arr, 25) + 1) << std::endl;

	std::cout << std::endl;

	try{easyFind(vec, 60);}
	catch(std::exception &e) {std::cout << "Error in vector easyFind: " << e.what() << std::endl;}
	try{easyFind(lst, 60);}
	catch(std::exception &e) {std::cout << "Error in list easyFind: " << e.what() << std::endl;}
	try{easyFind(arr, 60);}
	catch(std::exception &e) {std::cout << "Error in array easyFind: " << e.what() << std::endl;}
	return (0);
};