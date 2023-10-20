/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:49:12 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/20 12:37:46 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void): _index(0) {};

PhoneBook::~PhoneBook(void) {};

std::string	getInput(std::string prefix)
{
	std::string input = RecursiveRead(prefix);
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
	this->_contact[_index].SetFirstName(getInput("First Name: "));
	this->_contact[_index].SetLastName(getInput("Last Name: "));
	this->_contact[_index].SetNickname(getInput("Nickname: "));
	this->_contact[_index].SetPhoneNumber(getInput("Phone Number: "));
	this->_contact[_index].SetDarkestSecret(getInput("Darkest Secret: "));
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
		std::cout << "|" << std::setw(10) << index;
		std::cout << "|" << std::setw(10) << this->_contact[index - 1].GetFirstName();
		std::cout << "|" << std::setw(10) << this->_contact[index - 1].GetLastName();
		std::cout << "|" << std::setw(10) << this->_contact[index - 1].GetNickname() << "|" << std::endl;
	}
	else
		std::cout << "Invalid index given\n";
};
