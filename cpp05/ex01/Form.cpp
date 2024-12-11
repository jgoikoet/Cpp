/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:09:22 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/22 17:24:42 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form(void) : _name("Unknow"), _signGrade(150), _executeGrade(150), _signed(0)
{std::cout << "Form Default constructor called" << std::endl;}

Form::Form(std::string name, int signGrade, int executeGrade):
_name(name),
_signGrade(signGrade),
_executeGrade(executeGrade)
{
	std::cout << "Form Parametrized constructor called" << std::endl;
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	this->_signed = 0;
}

Form::~Form(void)
{std::cout << "Form Destructor called" << std::endl;}

Form::Form(Form const & src):
_name(src._name),
_signGrade(src._signGrade),
_executeGrade(src._executeGrade)
{
	*this = src;
}

Form & Form::operator=(Form const & rhs)
{
	this->_signed = rhs._signed; 
	return *this;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

int	Form::getSignGrade(void) const
{
	return this->_signGrade;
}

int	Form::getExecuteGrade(void) const
{
	return this->_executeGrade;
}

bool	Form::getSigned(void) const
{
	return this->_signed;
}

void	Form::beSigned(Bureaucrat & b)
{
	if(_signed)
		b.signForm(2, this->getName());
	else if (b.getGrade() > this->getSignGrade())
	{
		b.signForm(0, this->getName());
		throw(GradeTooLowException());
	}
	else
	{	
		this->_signed = 1;
		b.signForm(1, this->getName());
	}
}

std::ostream & operator<<(std::ostream & o, Form const & i)
{
	if(i.getSigned())
		o << "📄 " << i.getName() << ", sign grade: " << i.getSignGrade() 
		<< ", execute grade: " << i.getExecuteGrade() << " ✅ SIGNED ✅";
	else
		o << "📄 " << i.getName() << ", sign grade: " << i.getSignGrade() 
		<< ", execute grade: " << i.getExecuteGrade() << " ❌ NOT SIGNED ❌";
	return o;
}