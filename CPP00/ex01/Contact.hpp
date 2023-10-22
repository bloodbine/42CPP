/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:53:33 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/22 11:50:35 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <cstring>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		Contact(void);
		~Contact(void);

		void		SetFirstName(std::string first_name);
		void		SetLastName(std::string last_name);
		void		SetNickname(std::string nickname);
		void		SetPhoneNumber(std::string phone_number);
		void		SetDarkestSecret(std::string darkest_secret);

		std::string	GetFirstName(void);
		std::string	GetLastName(void);
		std::string	GetNickname(void);
		std::string	GetPhoneNumber(void);
		std::string	GetDarkestSecret(void);
};

#endif