/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:07:09 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/14 17:35:52 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"


static int ft_isdigit(std::string phone)
{
	int	i;

	i = 0;
	while (phone[i])
	{
		if(!isdigit(phone[i++]))
			return (0);
	}
	return(1);
}

static void	ft_add(PhoneBook *phonebook)
{
	std::string first;
	std::string	last;
	std::string nick;
	std::string phone;
	std::string	secret;

	while (first.empty())
	{
		std::cout << "First name: ";
		if(!std::getline(std::cin, first))
			exit(0);
		if (first.empty())
		std::cout << "👿 Type something you motherfucker! 👿" << std::endl;
	}
	while (last.empty())
	{
		std::cout << "Last name: ";
		if(!std::getline(std::cin, last))
			exit(0);
		if (last.empty())
		std::cout << "👿 Type something you son of a bich! 👿" << std::endl;
	}
	while (nick.empty())
	{
		std::cout << "Nickname: ";
		if(!std::getline(std::cin, nick))
			exit(0);
		if (nick.empty())
		std::cout << "👿 Type something you dirty rat 👿" << std::endl;
	}
	while (phone.empty() || !ft_isdigit(phone))
	{
		std::cout << "Phone number: ";
		if(!std::getline(std::cin, phone))
			exit(0);
		if (phone.empty())
		std::cout << "👿 Type something you bit of shit 👿" << std::endl;
		if (!ft_isdigit(phone))
		std::cout << "👿 Type only numbers assFace 👿" << std::endl;
	}
	while (secret.empty())
	{
		std::cout << "Darkest secret: ";
		if(!std::getline(std::cin, secret))
			exit(0);
		if (secret.empty())
			std::cout << "👿 Type something you cucaracha 👿" << std::endl;
	}
	Contact contact(first, last, nick, phone, secret);
	phonebook->addContact(contact);
}

static	int ft_atoi(std::string s)
{
	int	i;
	int n;

	i = 0;
	n = 0;
	//while(i < s.size())
	while(s[i] != '\0')
	{
		n = n * 10;
		n = n + s[i] - '0';
		i++;
	}
	return(n);
}

void	ft_search(PhoneBook *phonebook)
{
	int	i;
	std::string index;

	if (phonebook->contact_count == 0)
	{
		std::cout << "😩 The Phonebook is empty cariño 😩" << std::endl;
		return;
	}
	std::cout << std::endl;
	std::cout << std::setw(11) << std::right << "INDEX|";
	std::cout << std::setw(11) << std::right << "FIRST NAME|";
	std::cout << std::setw(11) << std::right << "LAST NAME|";
	std::cout << std::setw(11) << std::right << "NICKNAME|";
	std::cout << std::endl << std::endl;
	i = 0;
	while(i < phonebook->contact_count)
	{
		phonebook->contacts[i].displayContactIndex(i);
		i++;
	}
	std::cout << std::endl;
	i = 0;
	while (i < 1 || i > phonebook->contact_count)
	{
		std::cout << "Select the index number you want to get info of: ";
		if(!std::getline(std::cin, index))
			exit(0);
		if (!ft_isdigit(index))
			std::cout << "👿 Type only numbers assFace 👿" << std::endl;
		else
		{
			i = ft_atoi(index);
			if (i < 1 || i > phonebook->contact_count)
				std::cout << "👿 Incorrect selection macareno 👿" << std::endl;
		}
	}
	phonebook->contacts[i - 1].displayContactInfo();
}

int main()
{
    PhoneBook phonebook;
	std::string comand;

    while (comand != "EXIT")
	{
		std::cout << "Type 'ADD', 'SEARCH' or 'EXIT': ";
		std::getline(std::cin, comand);
		if (std::cin.eof())
			return (0);
        if (comand == "ADD")
			ft_add(&phonebook);
		else if (comand == "SEARCH")
			ft_search(&phonebook);
		else if (comand.empty())
			std::cout << "👿 You should type something, payaso 👿" << std::endl;
		else if (comand != "EXIT")
			std::cout << "👿 Incorrect command, try again, anorbecil 👿" << std::endl;
    }
    return 0;
}
