/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:51:55 by gpasztor          #+#    #+#             */
/*   Updated: 2024/01/09 15:45:15 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iostream>
#include <stack>

int main(void)
{
	//Subject test
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "SubjectSpan, ShortestSpan: " << sp.shortestSpan() << std::endl;
	std::cout << "SubjectSpan, LongestSpan: " << sp.longestSpan() << std::endl;
	//Subject test with addRange instead of addNumber
	Span smallSpan = Span(5);
	const int testnumbers[] = {6, 3, 17, 9, 11};
	smallSpan.addRange(testnumbers, 5);
	std::cout << "SubjectRangeSpan, ShortestSpan: " << smallSpan.shortestSpan() << std::endl;
	std::cout << "SubjectRangeSpan, LongestSpan: " << smallSpan.longestSpan() << std::endl;
	//Large test with 10000 numbers
	Span bigSpan = Span(10000);
	bigSpan.fillSpan();
	std::cout << "BigSpan, ShortestSpan: " << bigSpan.shortestSpan() << std::endl;
	std::cout << "BigSpan, LongestSpan: " << bigSpan.longestSpan() << std::endl;
	//Error tests
	Span badspan = Span(10);
	const int biggertestnumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
	try
	{badspan.addRange(biggertestnumbers, 11);}
	catch (std::exception &e)
	{std::cout << "Badspan 11 at once error: " << e.what() << std::endl;}
	try
	{
		badspan.addRange(biggertestnumbers, 6);
		badspan.addRange(biggertestnumbers, 6);
	}
	catch (std::exception &e)
	{std::cout << "Badspan 2x6 error: " << e.what() << std::endl;}
	return 0;
};
