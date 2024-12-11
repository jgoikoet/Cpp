/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:21:51 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/19 19:24:47 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{	
	if (argc < 2)
		return (std::cout << "Error: Incorrect number of arguments" << std::endl, 1);
	
	std::string str;
	for (int i = 1; argv[i]; i++)
	{
		str += argv[i];
		str += " ";
	}

	int s = 0;
	for(int i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
			s++;
	}	
	if (s == 0)
		return (std::cout << "Error: empty argument" << std::endl, 1);
	
	RPN a(str);

	RPN b(a);
	
	b.calculate();
	
	return 0;
}
