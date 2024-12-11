/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:14:10 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/29 12:31:42 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	private:
		std::string _name;
		Weapon	*_Weapon;
	
	public:
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon &type);
		void	attack();
};

#endif
