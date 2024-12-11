/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:09:33 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/22 15:59:22 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"

class Form
{
	private:

		std::string const	_name;	
		int const			_signGrade;
		int	const			_executeGrade;
		bool				_signed;
		
	public:

		Form(void);
		Form(std::string name, int signGrade, int executeGrade);
		Form(Form const & src);
		~Form(void);

		Form & operator=(Form const & rhs);
		
		
		std::string	getName(void) const;
		int			getSignGrade(void) const;
		int			getExecuteGrade(void) const;
		bool		getSigned(void) const;
		void		beSigned(Bureaucrat & b);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade to high 😡");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade to low 😡");
			}
	};
};
std::ostream & operator<<(std::ostream & o, Form const & i);

#endif