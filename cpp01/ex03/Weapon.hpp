/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:59:45 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/03 15:21:28 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	private:
		std::string  _type;
	
	public:
		std::string const	&getType();
		void				setType(std::string type);
		
		Weapon();
		Weapon(std::string type);
		~Weapon();
};

#endif