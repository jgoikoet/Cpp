/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:01:51 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/26 12:56:51 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void){
	std::cout << "Anonimus and blue Intern constructor called" << std::endl;
}

Intern::Intern::~Intern(void){
	std::cout << "Anonimus and blue Intern destructor called" << std::endl;
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

AForm * Intern::makeForm(std::string formName, std::string target)
{
	std::string formN[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm * form = NULL;
	int i;

    for (i = 0; i < 3; i++)
    {
        if (formN[i] == formName)
            break;
    }
	
    switch (i)
    {
        case 0:
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			break;
        case 1:
			form = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			break;
        case 2:
        	form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
        	break;
        default:
            std::cout << formName << " doesn`t exist mamarracho! 🤮" << std::endl;
    }
	return form;
}