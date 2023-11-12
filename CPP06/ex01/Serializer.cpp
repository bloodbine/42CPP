/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:01:26 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/12 14:36:51 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {};
Serializer::Serializer(const Serializer& obj) {*this = obj;};
Serializer& Serializer::operator=(const Serializer& obj) {(void)obj; return *this;};
Serializer::~Serializer() {};

uintptr_t Serializer::serialize(Data* data) {return (reinterpret_cast<uintptr_t>(data));};
Data* Serializer::deserialize(uintptr_t raw) {return (reinterpret_cast<Data*>(raw));};