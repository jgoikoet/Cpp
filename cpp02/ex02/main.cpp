/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:28:43 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/09 11:37:50 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	std::cout << std::endl << "💿 💿 💿 💿 💿 💿 💿 💿" << std::endl << std::endl;
	Fixed x;
	Fixed const z( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << x << std::endl;
	std::cout << ++x << std::endl;
	std::cout << x << std::endl;
	std::cout << x++ << std::endl;
	std::cout << x << std::endl;
	
	std::cout << z << std::endl;
	
	std::cout << Fixed::max( x, z ) << std::endl;

	std::cout << std::endl << "💿 💿 💿 💿 💿 💿 💿 💿" << std::endl << std::endl;
	Fixed	a(4.3f);
	Fixed	b(3.9f);
	Fixed	c;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	

	std::cout << std::endl << "💿 💿 💿 💿 💿 💿 💿 💿" << std::endl << std::endl;
	c = a + b;
	std::cout << "c = a + b = " << c << std::endl;
	c = a - b;
	std::cout << "c = a - b = " << c << std::endl;
	c = a * b;
	std::cout << "c = a * b = " << c << std::endl;
	c = a / b;
	std::cout << "c = a / b = " << c << std::endl;

	std::cout << std::endl << "💿 💿 💿 💿 💿 💿 💿 💿" << std::endl << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << std::endl << "💿 💿 💿 💿 💿 💿 💿 💿" << std::endl << std::endl;
	if (a > b)
		std::cout << "a es mayor que b" << std::endl;
	else
		std::cout << "a no es mayor que b" << std::endl;
	if (a < b)
		std::cout << "a es menor que b" << std::endl;
	else
		std::cout << "a no es menor que b" << std::endl;
	if (a >= b)
		std::cout << "a es mayor o igual que b" << std::endl;
	else
		std::cout << "a no es mayor o igual que b" << std::endl;
	if (a <= b)
		std::cout << "a es menor o igual que b" << std::endl;
	else
		std::cout << "a no es menor o igual que b" << std::endl;
	if (a == b)
		std::cout << "a es igual que b" << std::endl;
	else
		std::cout << "a no es igual que b" << std::endl;
	if (a != b)
		std::cout << "a es diferente de b" << std::endl;
	else
		std::cout << "a no es diferente de b" << std::endl;


	std::cout << std::endl << "💿 💿 💿 💿 💿 💿 💿 💿" << std::endl << std::endl;

	return (0);
}
