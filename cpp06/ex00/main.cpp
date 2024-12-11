/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:51:36 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/28 12:38:05 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"



int main(int argc, char **argv)
{
    //ScalarConverter a;
    
	if (argc != 2)
		return(std::cout << "Incorrect number of arguments" << std::endl, 1);
    ScalarConverter::ft_convert(argv[1]);
	return (0);
}

