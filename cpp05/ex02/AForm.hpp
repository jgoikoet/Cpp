/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:09:33 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/23 15:51:12 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:

		std::string const	_name;	
		int const			_signGrade;
		int	const			_executeGrade;
		bool				_signed;
		
	public:

		AForm(void);
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(AForm const & src);
		virtual ~AForm(void);

		AForm & operator=(AForm const & rhs);
		
		
		std::string		getName(void) const;
		int				getSignGrade(void) const;
		int				getExecuteGrade(void) const;
		bool			getSigned(void) const;
		void			beSigned(Bureaucrat & b);
		virtual void	execute(Bureaucrat const & executor) const = 0;

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
std::ostream & operator<<(std::ostream & o, AForm const & i);

#endif