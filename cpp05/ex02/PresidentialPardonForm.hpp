/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:12:55 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/23 16:13:54 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:

		std::string _target;
	
	public:
	
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);	

		std::string getTarget(void);
		void	execute(Bureaucrat const & executor) const;	

	class NotSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Not signed, can`t execute 😡");
			}
	};
};