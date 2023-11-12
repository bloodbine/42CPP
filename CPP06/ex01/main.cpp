/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:19:13 by gpasztor          #+#    #+#             */
/*   Updated: 2023/11/12 14:38:13 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data* testData = new Data(5);
	uintptr_t serialized = Serializer::serialize(testData);
	Data* deserialized = Serializer::deserialize(serialized);

	std::cout << "Base Data: " << testData << std::endl;
	std::cout << "Serialized Data: " << serialized << std::endl;
	std::cout << "Deserialized Data: " << deserialized << std::endl;

	free(testData);
	return (0);
};
