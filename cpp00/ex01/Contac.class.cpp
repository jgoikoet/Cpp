/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contac.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:47:22 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/14 16:42:29 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Contact::Contact(){
	
}


Contact::Contact(const std::string& first, const std::string& last, const std::string& nick, \
        const std::string& phone, const std::string& secret)
{
	this->_first_name = first;
	this->_last_name = last;
	this->_nickname = nick;
	this->_phone_number = phone;
	this->_darkest_secret = secret;
	std::cout << std::endl << "😊 New entry corectly added to Phonebook 😊" << std::endl << std::endl;
}

void    Contact::displayContactIndex(int index) const
{
	std::cout << std::setw(10) << std::right << index + 1 << "|";
	if (this->_first_name.size() > 10)
		std::cout << std::setw(9) << std::right << this->_first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::right << this->_first_name << "|";
	if (this->_last_name.size() > 10)
		std::cout << std::setw(9) << std::right << this->_last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::right << this->_last_name << "|";
	if (this->_nickname.size() > 10)
		std::cout << std::setw(9) << std::right << this->_nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << std::right << this->_nickname << "|";
	std::cout << std::endl;
}

void    Contact::displayContactInfo() const
{
	std::cout << std::endl;
	std::cout << "First name: " << _first_name << std::endl;
	std::cout << "Last name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone number: " << _phone_number << std::endl;
	std::cout << "Darkest secret: " << _darkest_secret << std::endl;
	std::cout << std::endl;
}
