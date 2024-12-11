/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:45:27 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/23 15:47:35 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <string>
#include "AForm.hpp"


class AForm;

class Bureaucrat
{
	private:
	
		std::string	const	_name;
		int					_grade;

	public:
		
		Bureaucrat(void);
		Bureaucrat(std::string	const	name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);
		
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);

		void		signForm(int sign, std::string form);
		void		executeForm(AForm const & form) const;

	class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Maximun grade is 1 atontao!");
				}
		};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Minimun grade is 150 anorbecil!");
			}
	};
};
std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

