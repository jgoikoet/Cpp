/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:58:26 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/19 18:42:02 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::complain(std::string level)
{
    std::string lev[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

    while (i < 4)
    {
        if (lev[i] == level)
            break;
        i++;
    }
    
    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            _debug();
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            _info();
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            _warning();
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            _error();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

void Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl;
}
void Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}