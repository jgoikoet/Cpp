/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:01:36 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/29 11:11:14 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	
	public:
		void	attack();

		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};

#endif