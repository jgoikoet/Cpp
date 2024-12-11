/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:37:29 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/03 15:34:38 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "🦁 " << _name << " constructor called";
	std::cout <<  " and takes a " << _weapon.getType() << std::endl;
}

HumanA::~HumanA(){
	std::cout << "🦁 " << _name << " destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << " 🩸🩸🩸" <<std::endl;
}
