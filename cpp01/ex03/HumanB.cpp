/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:01:20 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/03 15:32:45 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_Weapon = NULL;
	std::cout << "🤡 " << _name << " constructor called" << std::endl;
}

HumanB::~HumanB(){
	std::cout << "🤡 " << _name << " destructor called" << std::endl;
}

void	HumanB::attack()
{
	if (_Weapon)
		std::cout << _name << " attacks with their " << _Weapon->getType() << " 🩸🩸🩸" << std::endl;
	else
		std::cout << _name << " attacks with the ass " <<  "🤣 🤣 🤣" << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	_Weapon = &type;
	std::cout << _name << " takes a " << _Weapon->getType() << std::endl;
}