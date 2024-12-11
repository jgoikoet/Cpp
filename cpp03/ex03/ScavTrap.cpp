/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:53:47 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 19:41:16 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_name = "Misterious Scav";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &  src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}
ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "ScavTrap Assigment operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints  =  src._energyPoints;
	this->_attackDamage = src._attackDamage;

	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
	{
		std::cout << "ScavTrap " << _name << " 🪓attacks🪓 " << target << std::endl;
		_energyPoints--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "⚔️ ScavTrap " << _name << " is now in gate keeper mode ⚔️" << std::endl;
}

void		ScavTrap::showStatus(void)
{
	std::cout << "🗿 " << _name << " STATUS 🗿" << std::endl;
	std::cout << "🥊 HIT POINTS: " << _hitPoints << std::endl;
	std::cout << "⛽️ ENERGY POINTS: " << _energyPoints << std::endl;
	std::cout << "🩸 ATTACK DAMAGE: " << _attackDamage << std::endl << std::endl;
}