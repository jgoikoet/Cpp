/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 11:59:55 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/29 13:09:01 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type) : _type(type){
	std::cout << "🔪 🗡  🪓 🏑 Weapon constructor called" << std::endl;
}

Weapon::~Weapon(){
	std::cout << "Weapon destructor called" << std::endl << std::endl;
}

std::string const & Weapon::getType()
{
	return(_type);
}

/* std::string Weapon::getType()
{
	return(_type);
} */

void	Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << "takes " << this->_type << std::endl;
}