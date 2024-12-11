/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:59:02 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/23 15:31:11 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AForm.hpp"
# include <random>

class RobotomyRequestForm : public AForm
{
	private:

		std::string _target;
	
	public:
	
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);	

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