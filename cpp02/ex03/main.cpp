/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:28:43 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/10 13:39:34 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
	std::cout << std::endl << "💿 💿 💿 💿 💿 💿 💿 💿 💿 💿 💿 💿" << std::endl << std::endl;
	
 /* Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    Point point(-1, 1);
 */
	
	Point	a(3, 1);
	Point	b(9, 1);
	Point	c(6, 4);
	Point	point(6, 3.9f);  

	if (bsp(a,  b,  c,  point))
		std::cout << "🍾 point is inside the triangle 🍾" << std::endl;
	else
		std::cout << "😤 point is out of the triangle 😤" << std::endl;
	
	std::cout << std::endl << "💿 💿 💿 💿 💿 💿 💿 💿 💿 💿 💿 💿" << std::endl << std::endl;

	return (0);
}
