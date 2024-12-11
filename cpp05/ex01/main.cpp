/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:46:11 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/22 17:47:57 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main(void)
{
	Bureaucrat	Onofre ("Onofrito Huevo Frito", 50);
	Form		Ley_hipster("Ley de apalizamiento de hipsters y cuñaos", 50, 40);
	Form		Ley_fentanilo("Ley de reparto gratuito de fentanilo", 49, 10);
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	std::cout << Onofre << std::endl;
	std::cout << Ley_hipster << std::endl;
	std::cout << Ley_fentanilo << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	try
	{
		Ley_hipster.beSigned(Onofre);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	std::cout << Ley_hipster << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	try
	{
		Ley_hipster.beSigned(Onofre);
		Ley_fentanilo.beSigned(Onofre);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	std::cout << Ley_fentanilo << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	try
	{
		Onofre.incrementGrade();
		std::cout << Onofre << std::endl;
		Ley_fentanilo.beSigned(Onofre);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;
	
	std::cout << Ley_fentanilo << std::endl;
	std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl << std::endl;


	return 0;
}
