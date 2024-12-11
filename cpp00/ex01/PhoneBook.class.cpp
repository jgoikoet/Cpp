/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:34:47 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/11 16:57:20 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_pos = -1;
	this->contact_count = 0;
}

void PhoneBook::addContact(const Contact& contact)
{
	if (this->contact_pos < 7)
	{
		this->contact_pos++;
		this->contacts[this->contact_pos] = contact;
		if (this->contact_count < 8)
			this->contact_count++;
	}
	else
	{
		this->contact_pos = 0;
		this->contacts[this->contact_pos] = contact;
		if (this->contact_count < 8)
			this->contact_count++;
	}
}
void PhoneBook::displayHeader() const
{

}
