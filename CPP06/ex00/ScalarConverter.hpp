/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:19:59 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/12 12:41:25 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& obj);
		ScalarConverter& operator=(const ScalarConverter& obj);
		~ScalarConverter();

		static void	_fromChar(std::string literal);
		static void	_fromInt(std::string literal);
		static void	_fromFloat(std::string literal);
		static void	_fromDouble(std::string literal);
		static void _fromMisc(int mcase);

	public:
		static void	convert(std::string literal);
};

#endif