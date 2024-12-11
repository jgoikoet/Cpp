/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:38:40 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 19:47:49 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void) : _name("Misterious Guy"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap	(std::string name) :  _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << "`s Name constructor called" << std::endl;
}

ClapTrap::ClapTrap	(ClapTrap const & src)
{
	*this = src;
	std::cout << "Copy constructor called " << this->_name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap (void)
{
	std::cout << _name << " destructor called" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Assigment operator called" << std::endl;
	
	this->_name = rhs._name + " clone";
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	
	return *this;
}

void		ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints)
	{
		std::cout << "ClapTrap " << _name << " 🪓attacks🪓 " << target << " causing " << _attackDamage << " points of damage" << std::endl;
		_energyPoints--;
	}
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount  << " points of damage 🩸" << std::endl;
		this->_hitPoints -= amount;
	}
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints)
	{
		std::cout << "🏥 ClapTrap " << _name << " repares it self adding " << amount  << " points to it`s hip points" << std::endl;
		this->_hitPoints += amount;
		_energyPoints--;
	}
}

void		ClapTrap::showStatus(void)
{
	std::cout << "🗿 " << _name << " STATUS 🗿" << std::endl;
	std::cout << "🥊 HIT POINTS: " << _hitPoints << std::endl;
	std::cout << "⛽️ ENERGY POINTS: " << _energyPoints << std::endl;
	std::cout << "🩸 ATTACK DAMAGE: " << _attackDamage << std::endl << std::endl;
}