/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:24:20 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/01 14:02:33 by gpasztor         ###   ########.fr       */
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
		~Fixed();
		Fixed(const Fixed &obj);
		Fixed &operator=(const Fixed& obj);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif