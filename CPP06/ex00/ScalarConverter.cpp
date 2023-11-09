/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:42:02 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/09 12:10:07 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <_ctype.h>
#include <cstdlib>
#include <cstring>

ScalarConverter::ScalarConverter(){};
ScalarConverter::ScalarConverter(const ScalarConverter& obj){*this = obj;};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& obj){(void)(obj); return (*this);};
ScalarConverter::~ScalarConverter(){};


void	ScalarConverter::convert(std::string literal)
{

};
