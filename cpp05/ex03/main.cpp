/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:46:11 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/26 12:52:42 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main(void)
{
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	Intern someRandomIntern;
	AForm* ppr;
	ppr = someRandomIntern.makeForm("presidential jamon", "Bender");
	
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	Bureaucrat Cuco("Cuco Mameluco", 1);
	AForm* rrp;
	rrp = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrp << std::endl;
	std::cout << Cuco << std::endl;
	rrp->beSigned(Cuco);
	std::cout << *rrp << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	rrp->execute(Cuco);
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	delete rrp;
	return 0;
}
