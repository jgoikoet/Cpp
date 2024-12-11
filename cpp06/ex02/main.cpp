/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:04:49 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/29 15:41:30 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Base.hpp"

void identify(Base  *p)
{
	//std::cout << dynamic_cast<A *>(p) << std::endl;
	if (dynamic_cast<A *>(p))
		std::cout << "Type *: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type *: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type *: C" << std::endl;
} 

void identify(Base& p)
{
	//identify(&p); Genialidad!
	//std::cout << dynamic_cast<A &>(p) << std::endl;
	//A j = dynamic_cast<A &>(p);
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type &: A" << std::endl;
		(void)a;
	}
	catch (std::exception &e)
	{
		try
		{
			B b = dynamic_cast<B&>(p);
			std::cout << "Type &: B" << std::endl;
			(void)b;
		}
		catch (std::exception &e)
		{
			try
			{
				C c = dynamic_cast<C&>(p);
				std::cout << "Type &: C" << std::endl;
				(void)c;
			}
			catch (std::exception &e)
			{
				std::cout << "Error" << std::endl;
			}
		}
	}
}
Base * generate(void)
{
	Base *p;

	srand(time(NULL));
    int rn = rand() % 3;	

	switch (rn)
	{
		case 0:
			std::cout << "Generated: A" << std::endl;
			p = new A;
			return(p);
		case 1:
			std::cout << "Generated: B" << std::endl;
			p = new B;
			return(p);
		case 2:
			std::cout << "Generated: C" << std::endl;
			p = new C;
			return(p);
	}
	return NULL;
}

int	main(void)
{
	Base *p = generate();

	identify(p);
	identify(*p);
	
	return 0;
}