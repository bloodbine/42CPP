/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:59:06 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/09 14:48:25 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main(void)
{
	std::cout << "Stack \"iterator\" functionality tests:" << std::endl;
	MutantStack<int> testMutantInt;
	for (size_t i = 1; i <= 20; i++) {testMutantInt.push(i);}
	std::cout << "Displaying each member of tesMutantInt via iterators:" << std::endl;
	for (MutantStack<int>::iterator it = testMutantInt.begin(); it != testMutantInt.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "Displaying each member of tesMutantInt via iterators increased by 42:" << std::endl;
	for (MutantStack<int>::iterator it = testMutantInt.begin(); it != testMutantInt.end(); it++)
		std::cout << *it + 42 << ' ';
	std::cout << std::endl;

	MutantStack<char> testMutantChar;
	for (char j = 'a'; j <= 'z'; j++) {testMutantChar.push(j);}
	std::cout << "Displaying each member of tesMutantChar via const iterators:" << std::endl;
	for (MutantStack<char>::const_iterator it = testMutantChar.begin(); it != testMutantChar.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "Displaying each member of tesMutantChar via const iterators in Uppercase:" << std::endl;
	for (MutantStack<char>::const_iterator it = testMutantChar.begin(); it != testMutantChar.end(); it++)
		std::cout << static_cast<char>(std::toupper(*it)) << ' ';
	std::cout << std::endl << std::endl;

	std::cout << "Original stack functionality tests:" << std::endl;
	std::cout << "std::stack<int>::empty() on testMutantInt result: " << std::boolalpha << testMutantInt.empty() << std::endl;
	std::cout << "std::stack<char>::empty() on testMutantChar result: " << std::boolalpha << testMutantChar.empty() << std::endl;
	std::cout << "std::stack<int>::size() on testMutantInt result: " << testMutantInt.size() << std::endl;
	std::cout << "std::stack<char>::size() on testMutantChar result: " << testMutantChar.size() << std::endl;
	testMutantInt.pop();
	testMutantChar.pop();
	std::cout << "std::stack<int>::size() on testMutantInt result after std::stack<int>::pop(): " << testMutantInt.size() << std::endl;
	std::cout << "std::stack<char>::size() on testMutantChar result after std::stack<char>::pop(): " << testMutantChar.size() << std::endl;
	return (0);
};
