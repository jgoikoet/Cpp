/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:07:21 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/26 12:58:57 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
AForm("Robotomy Request Form", 72, 45),
_target("Unknown")
{}
RobotomyRequestForm::RobotomyRequestForm(std::string target):
AForm("Robotomy Request Form", 72, 45),
_target(target)
{}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}
RobotomyRequestForm::~RobotomyRequestForm(void)
{}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void)
{
	return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	std::cout << "¡Aaaaaaaaaarggggggg! ¡not feeling las piernas! ¡arrrrrrrrggg!" << std::endl;
	std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(0, 1);
	int randomNumber = distribution(generator);
	if(randomNumber)
		std::cout << this->_target << " has been robotomized successfully 🤖" << std::endl;
	else
		std::cout << "Robotomization on " << this->_target << " has failed 💩" <<std::endl;
}