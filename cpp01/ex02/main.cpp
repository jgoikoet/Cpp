/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:46:58 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/03 14:06:55 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main (void)
{
	std::string string = "HI THIS IS BRAIN";

	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "The memory address of the string variable is: " << &string << std::endl;
	std::cout << "The memory address held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is: " << &stringREF << std::endl;

	std::cout << "The value of the string variable is: " << string << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is: " << stringREF << std::endl;

	return (0);
}