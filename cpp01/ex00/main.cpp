/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:46:58 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/15 11:48:09 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie	*pepe;
	Zombie	*luis;

	pepe = newZombie("pepe");
	luis = newZombie("luis");

	randomChump("Anacardo");
	randomChump("Gordinflorio");

	pepe->announce();
	luis->announce();
	delete pepe;
	delete luis;

	return (0);
}