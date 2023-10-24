/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:10:03 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/24 14:52:48 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << "Additional tests" << std::endl << std::endl;

	Fixed	c(25.250f);
	Fixed	d(5);

	std::cout << std::endl;

	std::cout << (c + d) << std::endl;
	std::cout << (c - d) << std::endl;
	std::cout << (c * d) << std::endl;
	std::cout << (c / d) << std::endl;

	std::cout << std::endl;

	std::cout << ++d << std::endl;
	std::cout << d++ << std::endl;
	std::cout << d << std::endl;
	std::cout << --d << std::endl;
	std::cout << d-- << std::endl;
	std::cout << d << std::endl;

	std::cout << std::endl;

	std::cout << (c > d) << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (c >= d) << std::endl;
	std::cout << (c <= d) << std::endl;
	std::cout << (c == d) << std::endl;
	std::cout << (c != d) << std::endl;

	std::cout << std::endl;

	return (0);
};
