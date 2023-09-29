/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:11:06 by gpasztor          #+#    #+#             */
/*   Updated: 2023/09/27 12:20:24 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact 	_contact[8];
		int			_index;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		std::string	RecursiveRead(std::string prefix);

		void		DisplayContactList(void);
		void		AddNewContact(void);
		void		SearchContact(void);
};
