/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:49:12 by gpasztor          #+#    #+#             */
/*   Updated: 2023/08/12 14:45:05 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

void	PhoneBook::DisplayContactList()
{
	int	i = 0;

	this->_contact[7].SetDarkestSecret("TestTest42");
	while (i < 8)
	{
		std::cout << "█████████████████████████████████████████████" << std::endl;
		std::cout << "█" << std::setw(10) << i + 1;
		std::cout << "█" << std::setw(10) << this->_contact[i].GetFirstName();
		std::cout << "█" << std::setw(10) << this->_contact[i].GetLastName();
		std::cout << "█" << std::setw(10) << this->_contact[i].GetNickname() << "█" << std::endl;
		i++;
	}
	std::cout << "█████████████████████████████████████████████" << std::endl;
};
