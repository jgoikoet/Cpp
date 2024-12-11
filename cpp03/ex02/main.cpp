/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:37:54 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 10:37:06 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
	
	ClapTrap	Tronfirulo("Tronfirulo");
	ClapTrap	Mongorron("Mongorron");
	ScavTrap	Mangarrancio("Mangarrancio");
	ScavTrap	Misterious;
	FragTrap	Txukundo("Txukundo");
	FragTrap	Kakote("Kakote");

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.showStatus();
	Mongorron.showStatus();
	Mangarrancio.showStatus();
	Misterious.showStatus();
	Txukundo.showStatus();
	Kakote.showStatus();
	
	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.attack("Mongorron");
	Mongorron.takeDamage(0);
	Mangarrancio.attack("Tronfirulo");
	Tronfirulo.takeDamage(20);
	Kakote.attack("Txukundo");
	Txukundo.takeDamage(30);
	Kakote.highFivesGuys();
	
	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.showStatus();
	Mongorron.showStatus();
	Mangarrancio.showStatus();
	Misterious.showStatus();
	Txukundo.showStatus();
	Kakote.showStatus();

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
}
