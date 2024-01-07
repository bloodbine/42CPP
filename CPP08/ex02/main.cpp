/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:59:06 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/07 16:07:23 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> testMutantInt;
	for (size_t i = 1; i <= 20; i++) {testMutantInt.push(i);}
	std::cout << "Displaying each member of tesMutantInt via iterators:" << std::endl;
	for (MutantStack<int>::iterator it = testMutantInt.begin(); it != testMutantInt.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	MutantStack<char> testMutantChar;
	for (char j = 'a'; j <= 'z'; j++) {testMutantChar.push(j);}
	std::cout << "Displaying each member of tesMutantChar via const iterators:" << std::endl;
	for (MutantStack<char>::const_iterator it = testMutantChar.begin(); it != testMutantChar.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	return (0);
};