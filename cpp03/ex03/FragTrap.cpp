/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:30:16 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 19:29:12 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_name = "Misterious FragTrap";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &  src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}
FragTrap & FragTrap::operator=(FragTrap const & src)
{
	std::cout << "FragTrap Assigment operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints  =  src._energyPoints;
	this->_attackDamage = src._attackDamage;

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " says: 😎 Give me five you Motherfucker! 😎" << std::endl;
}

void		FragTrap::showStatus(void)
{
	std::cout << "🗿 " << _name << " STATUS 🗿" << std::endl;
	std::cout << "🥊 HIT POINTS: " << _hitPoints << std::endl;
	std::cout << "⛽️ ENERGY POINTS: " << _energyPoints << std::endl;
	std::cout << "🩸 ATTACK DAMAGE: " << _attackDamage << std::endl << std::endl;
}