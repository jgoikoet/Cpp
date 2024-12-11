/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:41:07 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 20:16:36 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	_name = "Misterious Diamond";
	
	setHitP(FragTrap::_hitPoints);
	setEnergyP(ScavTrap::_energyPoints);
	setAttackD(FragTrap::_attackDamage);
	
	std::cout << _name << "`s Diamond Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_scav_name"), FragTrap(name + "_frag_name")
{
	_name = name;
	
	setHitP(FragTrap::_hitPoints);
	setEnergyP(ScavTrap::_energyPoints);
	setAttackD(FragTrap::_attackDamage);
	
	std::cout << _name << "`s Diamond name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &  src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << _name << "`s DiamondTrap destructor called." << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & src)
{
	(void)src;
	std::cout << "DiamondTrap Assigment operator called" << std::endl;
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi guys!, may name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}