/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:32:58 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/24 15:28:03 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(0.0f, 0.0f);
	Point b(1.0f, 0.0f);
	Point c(0.0f, 1.0f);
	Point p(0.1f, 0.1f);

	if (bsp(a, b, c, p) == true)
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is not inside the triangle" << std::endl;
	return (0);
};