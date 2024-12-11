/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:37:54 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 20:00:40 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
	
	ClapTrap	Tronfirulo("Tronfirulo");
	ScavTrap	Mangarrancio("Mangarrancio");

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.showStatus();
	Mangarrancio.showStatus();

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Mangarrancio.attack("Tronfirulo");
	Tronfirulo.takeDamage(20);
	Tronfirulo.beRepaired(500);
	Tronfirulo.attack("Mangarrancio");
	
	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.showStatus();
	Mangarrancio.showStatus();

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
}
