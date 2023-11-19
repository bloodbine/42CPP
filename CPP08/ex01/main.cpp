/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:51:55 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/19 12:40:49 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iostream>


int main(void)
{
	//Basic test
	Span smallSpan = Span(5);
	const int testnumbers[] = {6, 3, 17, 9, 11};
	smallSpan.addRange(testnumbers, 5);
	std::cout << "SmallSpan, ShortestSpan: " << smallSpan.shortestSpan() << std::endl;
	std::cout << "SmallSpan, LongestSpan: " << smallSpan.longestSpan() << std::endl;
	//Large test with 10000 numbers
	Span bigSpan = Span(10000);
	bigSpan.fillSpan();
	std::cout << "BigSpan, ShortestSpan: " << bigSpan.shortestSpan() << std::endl;
	std::cout << "BigSpan, LongestSpan: " << bigSpan.longestSpan() << std::endl;
	return 0;
};
