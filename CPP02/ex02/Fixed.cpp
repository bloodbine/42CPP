/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:24:17 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/11 16:04:35 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int num): _value(num << _fractional)
{
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float num): _value((int)roundf(num * (1 << _fractional)))
{
	std::cout << "Float constructor called" << std::endl;
};

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
};


int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
};

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
};

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_fractional));
};

int		Fixed::toInt(void) const
{
	return ((int)roundf((float)this->_value / (float)(1 << this->_fractional)));
};

Fixed &Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		this->_value = obj.getRawBits();
	return *this;
};

Fixed Fixed::operator+(const Fixed& obj)
{
	return (this->toFloat() + obj.toFloat());
};

Fixed Fixed::operator-(const Fixed& obj)
{
	return (this->toFloat() - obj.toFloat());
};

Fixed Fixed::operator/(const Fixed& obj)
{
	return (this->toFloat() / obj.toFloat());
};

Fixed Fixed::operator*(const Fixed& obj)
{
	return (this->toFloat() * obj.toFloat());
};

Fixed &Fixed::operator++()
{
	this->_value++;
	return (*this);
};

Fixed Fixed::operator++(int)
{
	Fixed	temp(*this);
	++(*this);
	return	(temp);
	
};

Fixed &Fixed::operator--()
{
	this->_value--;
	return (*this);
};

Fixed Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(*this);
	return	(temp);
	
};

int Fixed::operator>(const Fixed& obj) const
{
	if (this->getRawBits() > obj.getRawBits())
		return (1);
	return (0);
};

int Fixed::operator>=(const Fixed& obj) const
{
	if (this->getRawBits() >= obj.getRawBits())
		return (1);
	return (0);
};

int Fixed::operator<(const Fixed& obj) const
{
	if (this->getRawBits() < obj.getRawBits())
		return (1);
	return (0);
};

int Fixed::operator<=(const Fixed& obj) const
{
	if (this->getRawBits() <= obj.getRawBits())
		return (1);
	return (0);
};

int Fixed::operator==(const Fixed& obj) const
{
	if (this->getRawBits() == obj.getRawBits())
		return (1);
	return (0);
};

int Fixed::operator!=(const Fixed& obj) const
{
	if (this->getRawBits() != obj.getRawBits())
		return (1);
	return (0);
};

std::ostream &operator<<(std::ostream &out, const Fixed& obj)
{
	out << obj.toFloat();
	return out;
};

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
};

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	return (f2);
};

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
};

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	return (f2);
};
