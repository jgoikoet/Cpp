/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:16:30 by imontero          #+#    #+#             */
/*   Updated: 2024/10/29 16:38:24 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>

class Contact 
{
    public:
		//default constructors
        Contact();
        /*  
        constructor. Arguments passed as constant references "&". 
        constant: the content of the std::string can´t be changed inside constructor
        std::string& : a reference to std::string instead of a total copy of std::string itself. More memory efficient
        */
        Contact(const std::string& first, const std::string& last, const std::string& nick, \
        const std::string& phone, const std::string& secret); 

        /* Getters to access the private attributes from outside the class
        We're not using getters in this exercise. It´s just for practice */
        
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;
		std::string getPhoneNumber() const;
	    std::string getDarkestSecret() const;

        // Display contact details
        void    displayContactIndex(int index) const;

        void    displayContactInfo() const;
       
    private:
    
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;

        std::string truncateString(const std::string& str, int width) const;

};

class PhoneBook
{
    public:
		PhoneBook();

        void addContact(const Contact& contact);
        
        void displayHeader() const;
    
    private:
    
        Contact contacts[8];
        int contact_count;
        int contact_pos;
};

#endif
