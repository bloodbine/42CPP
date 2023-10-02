/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:24:20 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/02 16:35:37 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
		int	_value;
		static const int _fractional = 8;

	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed(const Fixed &obj);
		//FP Copy Operator
		Fixed &operator=(const Fixed& obj);
		//FP Arithmetic Operators
		Fixed operator+(const Fixed& obj);
		Fixed operator-(const Fixed& obj);
		Fixed operator*(const Fixed& obj);
		Fixed operator/(const Fixed& obj);
		//FP Increment/Decrement Operators
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		//FP Comparison Operators
		int operator>(const Fixed& obj) const;
		int operator>=(const Fixed& obj) const;
		int operator<(const Fixed& obj) const;
		int operator<=(const Fixed& obj) const;
		int operator==(const Fixed& obj) const;
		int operator!=(const Fixed& obj) const;
		//FP Member Functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		//FP Static Member Functions
		static Fixed&	min(Fixed& f1, Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		static Fixed&	max(Fixed& f1, Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);
};

std::ostream &operator<<(std::ostream &out, const Fixed& obj);

#endif