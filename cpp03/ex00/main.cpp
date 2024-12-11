/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:37:54 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/15 12:43:20 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
	
	ClapTrap	Tronfirulo("Tronfirulo");
	ClapTrap	Mongorron("Mongorron");
	ClapTrap	Arrastracia("Arrastracia");
	ClapTrap	Misterious;
	ClapTrap	Arrastracia2(Arrastracia);

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.showStatus();
	Mongorron.showStatus();
	Arrastracia.showStatus();
	Misterious.showStatus();
	Arrastracia2.showStatus();

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.attack("Mongorron");
	Mongorron.takeDamage(0);
	Arrastracia2.attack("Arrastracia");
	Arrastracia.takeDamage(0);
	Mongorron.attack("Tronfirulo");
	Tronfirulo.takeDamage(0);

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.showStatus();
	Mongorron.showStatus();
	Arrastracia.showStatus();
	Misterious.showStatus();
	Arrastracia2.showStatus();

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.beRepaired(5);

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Tronfirulo.showStatus();
	Mongorron.showStatus();
	Arrastracia.showStatus();
	Misterious.showStatus();
	Arrastracia2.showStatus();
	
}
