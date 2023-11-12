/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:52:23 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/12 15:29:44 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <iostream>

int	main(void)
{
	Base* testPTR = generate();
	Base& testREF = *testPTR;

	std::cout << "---------------------" << std::endl;
	identify(testPTR);
	std::cout << "- - - - - - - - - - -" << std::endl;
	identify(testREF);
	std::cout << "---------------------" << std::endl;

	delete (testPTR);
	return (0);
};

// for i in {1..100}; do ./Identify >> test.txt; sleep 1; done;