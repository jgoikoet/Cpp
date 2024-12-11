/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:32:12 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/23 13:43:02 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:

		std::string _target;
	
	public:
	
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);	

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

