/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:50:25 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/23 16:27:11 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
AForm("Presidential Pardon Form", 25, 5),
_target("Unknown")
{}
PresidentialPardonForm::PresidentialPardonForm(std::string target):
AForm("Presidential Pardon Form", 25, 5),
_target(target)
{}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
}
PresidentialPardonForm::~PresidentialPardonForm(void)
{}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void)
{
	return (_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
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

	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox 🤩" <<std::endl;
}