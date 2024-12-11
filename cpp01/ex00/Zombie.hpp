/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:47:32 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/26 17:24:16 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:

	std::string _name;

	public:
	
		Zombie(std::string name);

		void announce(void);

		~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump( std::string name );

#endif