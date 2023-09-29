/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:33:41 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/29 15:53:20 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "Memory address of string: " << &string << std::endl;
	std::cout << "Memory address of string Pointer: " << stringPTR << std::endl;
	std::cout << "Memory address of string Reference: " << &stringREF << std::endl;

	std::cout << "Value of string: " <<string << std::endl;
	std::cout << "Value pointed to by string Pointer: " << *stringPTR << std::endl;
	std::cout << "Value referred to by string Reference: " << stringREF << std::endl;
};
