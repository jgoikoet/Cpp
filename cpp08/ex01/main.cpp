/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:45:59 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/15 10:20:50 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int generateBetween() {
    return std::rand() % 5000;
}

int main()
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		sp.addNumber(112); // salta excepcion
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	for (unsigned int i = 0; i < sp.getSize(); i++)
		std::cout << sp.getNumber(i) << std::endl;
		
	
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	std::cout << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl; 

	Span s(100000);

	std::vector<int>    v( 400);
    std::srand( time ( NULL ) );
    std::generate( v.begin(), v.end(), generateBetween);

	try
	{
		s.addMany(v.begin(), v.end());
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;

		std::cout << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	for (unsigned int i = 0; i < s.getSize(); i++)
		std::cout << s.getNumber(i) << std::endl;
	
	
	std::cout << std::endl;
	
	
	return 0;
}