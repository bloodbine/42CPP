/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:49:08 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/20 12:30:53 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact():
_first_name(""),
_last_name(""),
_nickname(""),
_phone_number(""),
_darkest_secret("") {};

Contact::~Contact() {};

void	Contact::SetFirstName(std::string first_name) {this->_first_name = first_name;};

void	Contact::SetLastName(std::string last_name) {this->_last_name = last_name;};

void	Contact::SetNickname(std::string nickname) {this->_nickname = nickname;};

void	Contact::SetPhoneNumber(std::string phone_number) {this->_phone_number = phone_number;};

void	Contact::SetDarkestSecret(std::string darkest_secret) {this->_darkest_secret = darkest_secret;};

std::string	Contact::GetFirstName(void) {return(this->_first_name);};

std::string	Contact::GetLastName(void) {return(this->_last_name);};

std::string	Contact::GetNickname(void) {return(this->_nickname);};

std::string	Contact::GetPhoneNumber(void) {return(this->_phone_number);};

std::string	Contact::GetDarkestSecret(void) {return(this->_darkest_secret);};
