/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:46:58 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/03 14:05:02 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	int	i = 5;
	int	j = 0;

	Zombie	*horde = zombieHorde( i, "Zombie" );

	while (j < i)
		horde[j++].announce();

	delete [] horde;
	
	return (0);
}