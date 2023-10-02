/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:42:49 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/02 16:38:42 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
	// std::cout << "Default Point constructor called" << std::endl;
};

Point::Point(const float x, const float y): _x(x), _y(y)
{
	// std::cout << "Point Float constructor called" << std::endl;
};

Point::~Point()
{
	// std::cout << "Point destructor called" << std::endl;
};

Point::Point(const Point &obj)
{
	// std::cout << "Point copy constructor called" << std::endl;
	*this = obj;
};

Point &Point::operator=(const Point& obj)
{
	// std::cout << "Point Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		const_cast<Fixed&>(this->_x) = obj.getX();
		const_cast<Fixed&>(this->_y) = obj.getY();
	}
	return (*this);
};

Fixed	Point::getX(void) const
{
	return (this->_x);
};

Fixed	Point::getY(void) const
{
	return (this->_y);
};
