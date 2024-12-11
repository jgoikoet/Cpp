/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:47:28 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/26 19:03:03 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "🧟‍♂️ New zombie created 🧟‍♂️" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "💀 " << this->_name << ": " << "is dead 💀" << std::endl;
}

void Zombie::set_name(int i, std::string name)
{
	std::string n = std::to_string(i + 1);
	this->_name = (name + " " + n);
}