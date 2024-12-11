/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:46:11 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/21 16:54:59 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int	main(void)
{

	try
	{
		Bureaucrat	Pepe("Pepe", 1);
		std::cout << Pepe << std::endl;
		Pepe.incrementGrade();
		std::cout << "al saltar la excepcion esto y lo siguiente no se ejecuta";
		std::cout << Pepe << std::endl;	
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	try
	{
		Bureaucrat	Antonio("Antonio", 200);
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	try
	{
		Bureaucrat	Calpurnio("Calpurnio", 145);
		Calpurnio.decrementGrade();
		std::cout << Calpurnio << std::endl;
		Calpurnio.decrementGrade();
		std::cout << Calpurnio << std::endl;
		Calpurnio.decrementGrade();
		std::cout << Calpurnio << std::endl;
		Calpurnio.decrementGrade();
		std::cout << Calpurnio << std::endl;
		Calpurnio.decrementGrade();
		std::cout << Calpurnio << std::endl;
		Calpurnio.incrementGrade();
		std::cout << Calpurnio << std::endl;
		Calpurnio.decrementGrade();
		std::cout << Calpurnio << std::endl;
		Calpurnio.decrementGrade();
		std::cout << Calpurnio << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	return 0;
}
