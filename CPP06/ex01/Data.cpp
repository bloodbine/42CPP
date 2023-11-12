/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:13:23 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/12 14:16:41 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _num(0) {};
Data::Data(int num): _num(num) {};
Data::Data(const Data& obj) {*this = obj;};
Data& Data::operator=(const Data& obj) {if (this != &obj) this->_num = obj._num; return(*this);};

int		Data::getNum(void) {return (this->_num);};
void	Data::setNum(int num) {this->_num = num;};