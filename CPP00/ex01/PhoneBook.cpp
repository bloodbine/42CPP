/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:49:12 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/22 11:43:31 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <_ctype.h>
#include <iomanip>

PhoneBook::PhoneBook(void): _index(0) {};

PhoneBook::~PhoneBook(void) {};

std::string	displayInput(std::string input)
{
	if (input.length() > 10)
		return(input.substr(0, 9) + ".");
	return(input);
};

std::string	RecursiveRead(std::string prefix)
{
	std::string	input;

	std::cout	<< prefix;
	std::getline(std::cin, input);
	if (std::cin.fail())
	{
		std::cout << "An error has occured on the Standard Input Stream\n";
		exit(1);
	};
	if (prefix.compare("Phone Number: ") == 0)
	{
		for (size_t i = 0; i < input.length(); i++)
		{
			if (!isdigit(input[i]))
			{
				std::cout << "Phone Number must be numeric" << std::endl;
				return (RecursiveRead(("Phone Number: ")));
			}
		}
	}
	if (input.length() > 0)
		return (input);
	else
		return (RecursiveRead(prefix));
};

void	PhoneBook::DisplayContactList(void)
{
	int	i = 0;

	while (i < 8)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << this->_contact[i].GetFirstName();
		std::cout << "|" << std::setw(10) << this->_contact[i].GetLastName();
		std::cout << "|" << std::setw(10) << this->_contact[i].GetNickname() << "|" << std::endl;
		i++;
	}
};

void	PhoneBook::AddNewContact(void)
{
	if (this->_index == 8)
	{
		std::cout << "Warning: Adding new contacts from now on will delete old ones" << std::endl;
		this->_index = 0;
	}
	this->_contact[_index].SetFirstName(RecursiveRead("First Name: "));
	this->_contact[_index].SetLastName(RecursiveRead("Last Name: "));
	this->_contact[_index].SetNickname(RecursiveRead("Nickname: "));
	this->_contact[_index].SetPhoneNumber(RecursiveRead("Phone Number: "));
	this->_contact[_index].SetDarkestSecret(RecursiveRead("Darkest Secret: "));
	this->_index++;
};

void	PhoneBook::SearchContact(void)
{
	std::string	input;
	int			index;

	input = RecursiveRead("Index: ");
	if (input.length() > 1 || isdigit(input[0]) == 0)
	{
		std::cout << "Invalid index given\n";
		return ;
	}
	index = std::stoi(input);
	if (index <= 8 && index >= 1)
	{
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|" << std::setw(10) << index;
		std::cout << "|" << std::setw(10) << displayInput(this->_contact[index - 1].GetFirstName());
		std::cout << "|" << std::setw(10) << displayInput(this->_contact[index - 1].GetLastName());
		std::cout << "|" << std::setw(10) << displayInput(this->_contact[index - 1].GetNickname()) << "|" << std::endl;
	}
	else
		std::cout << "Invalid index given\n";
};
