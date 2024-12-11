/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:37:54 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/04/04 13:22:33 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
	
	ClapTrap	Tronfirulo("Tronfirulo");
	ScavTrap	Mangarrancio("Mangarrancio");
	FragTrap	Txukundo("Txukundo");
	DiamondTrap	Xelebrin("Xelebrin");

	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Xelebrin.showStatus();
	Tronfirulo.showStatus();
	Mangarrancio.showStatus();
	Txukundo.showStatus();
	
	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	Xelebrin.whoAmI();
	Xelebrin.attack("Rotiño");
	/* Mangarrancio.attack("Tronfirulo");
	Tronfirulo.takeDamage(20);
	 */
	//std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;

	/* Tronfirulo.showStatus();
	Mangarrancio.showStatus();
	Txukundo.showStatus();
 */
	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
}
