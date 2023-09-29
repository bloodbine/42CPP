/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:49:12 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/27 12:24:28 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
};

PhoneBook::~PhoneBook(void){};

std::string	PhoneBook::RecursiveRead(std::string prefix)
{
	std::string	input;

	std::cout	<< prefix;
	std::getline(std::cin, input);
	if (std::cin.fail())
	{
		std::cout << "An error has occured on the Standard Input Stream\n";
		exit(1);
	};
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
	std::string input;

	if (this->_index == 8)
	{
		std::cout << "Warning: Adding new contacts from now on will delete old ones" << std::endl;
		this->_index = 0;
	}
	input = RecursiveRead("First Name: ");
	if (input.length() > 10)
		this->_contact[this->_index].SetFirstName(input.substr(0, 9) + ".");
	else
		this->_contact[this->_index].SetFirstName(input);
	input = RecursiveRead("Last Name: ");
	if (input.length() > 10)
		this->_contact[this->_index].SetLastName(input.substr(0, 9) + ".");
	else
		this->_contact[this->_index].SetLastName(input);
	input = RecursiveRead("Nickname: ");
	if (input.length() > 10)
		this->_contact[this->_index].SetNickname(input.substr(0, 9) + ".");
	else
		this->_contact[this->_index].SetNickname(input);
	input = RecursiveRead("Phone Number: ");
	if (input.length() > 10)
		this->_contact[this->_index].SetPhoneNumber(input.substr(0, 9) + ".");
	else
		this->_contact[this->_index].SetPhoneNumber(input);
	input = RecursiveRead("Darkest Secret: ");
	if (input.length() > 10)
		this->_contact[this->_index].SetDarkestSecret(input.substr(0, 9) + ".");
	else
		this->_contact[this->_index].SetDarkestSecret(input);
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
		if ()
		std::cout << "|" << std::setw(10) << index;
		std::cout << "|" << std::setw(10) << this->_contact[index - 1].GetFirstName();
		std::cout << "|" << std::setw(10) << this->_contact[index - 1].GetLastName();
		std::cout << "|" << std::setw(10) << this->_contact[index - 1].GetNickname() << "|" << std::endl;
	}
	else
		std::cout << "Invalid index given\n";
};
