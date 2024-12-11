/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:45:33 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/21 17:04:55 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Unknown"), _grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string	const	name, int grade) : _name(name)
{
	std::cout << "Parametrized constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	//this->_name = rhs._name;
	this->_grade = rhs._grade;
	return *this;
}

std::string Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade < 2)
		throw(GradeTooHighException());
	
	this->_grade--;
	std::cout << _name << " has been upgraded to level " << _grade << "! 😎" << std::endl;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade >= 150)
		throw(GradeTooLowException());
	this->_grade++;
	std::cout << _name << " has been downgraded to level " << _grade << "  😪" << std::endl;
}
std::ostream &  operator<<(std::ostream & o, Bureaucrat const & i)
{
	o << "🤓 " << i.getName() << ", bureaucrat grade " << i.getGrade();

	return o;
}