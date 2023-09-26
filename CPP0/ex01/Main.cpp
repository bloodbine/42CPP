/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:48:21 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/26 19:31:07 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phonebook;

	std::string	command;
	while (1)
	{
		command = phonebook.RecursiveRead("Phonebook: ");
		if (command.compare("ADD") == 0)
			phonebook.AddNewContact();
		else if (command.compare("SEARCH") == 0)
			phonebook.SearchContact();
		else if (command.compare("EXIT") == 0)
			return(0);
		else
			phonebook.DisplayContactList();
	}
	return (0);
};
