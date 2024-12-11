/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:46:11 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/26 13:21:57 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	Onofre ("Onofrito Huevo Frito", 50);
	Bureaucrat	Bosco ("Bosco Cacasblandas", 150);
	Bureaucrat Amo ("Putoamo Garsia", 1);
	std::cout << Onofre << std::endl;
	std::cout << Bosco << std::endl;
	std::cout << Amo << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	ShrubberyCreationForm x("Pepe");
	RobotomyRequestForm y("Marianico");
	PresidentialPardonForm z("M. Rajoy");
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	try
	{
		x.execute(Onofre);
		std::cout << "Esto no se imprime porque salta la excepcion" << std::endl;
	}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}

	try
	{x.beSigned(Onofre);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << x << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;


	try
	{x.execute(Bosco);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	try
	{x.execute(Onofre);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	try
	{y.beSigned(Onofre);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << y << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	try
	{y.execute(Onofre);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	try
	{y.execute(Amo);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	try
	{z.beSigned(Onofre);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
try
	{z.beSigned(Amo);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << z << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	try
	{z.execute(Onofre);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	try
	{z.execute(Amo);}
	catch(const std::exception& e)
	{std::cerr << "Exception: " << e.what() << '\n';}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;

	return 0;
}
