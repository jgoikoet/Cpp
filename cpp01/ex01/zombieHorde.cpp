/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:26:19 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/26 18:16:14 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde;
	int		i;

	horde = new Zombie[N];
	
	i = 0;
	while (i < N)
	{
		horde[i].set_name( i, name);
		i++;
	}

	return(horde);
}