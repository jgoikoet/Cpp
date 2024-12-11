/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:25:31 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/23 14:03:32 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
AForm("Shrubbery Creation Form", 145, 137),
_target("Unknown")
{}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
AForm("Shrubbery Creation Form", 145, 137),
_target(target)
{}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void)
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(!getSigned())
	{
		executor.executeForm(*this);
		throw(NotSignedException());
	}
	if(executor.getGrade() > this->getExecuteGrade())
	{
		executor.executeForm(*this);
		throw(GradeTooLowException());
	}
	executor.executeForm(*this);
	std::ofstream file(_target + "_shrubbery");
	file << "    I \n   III\n  IIIII\n IIIIIII\n    I\n    I\n\n\n\n";
	file << "    I \n   III\n  IIIII\n IIIIIII\n    I\n    I\n\n\n\n";
	file << "    I \n   III\n  IIIII\n IIIIIII\n    I\n    I";
	file.close();
}
