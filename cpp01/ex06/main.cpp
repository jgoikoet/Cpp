/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:38:53 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/03 12:44:44 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl comp;

	if (argc != 2)
		return(std::cout << "Incorrect number of arguments" << std::endl, 1);
		
	comp.complain(argv[1]);
		
	return (0);
}
