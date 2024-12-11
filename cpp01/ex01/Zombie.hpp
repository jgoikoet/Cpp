/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:47:32 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/26 19:02:52 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:

	std::string _name;

	public:
	
		Zombie();

		void announce(void);
		
		void set_name(int i, std::string name);

		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif