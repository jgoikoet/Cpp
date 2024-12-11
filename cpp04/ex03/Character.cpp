/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:56:58 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/26 10:56:39 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Unknow")
{
	std::cout << "Character default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character parameterized constructor called" << std::endl;
		for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character (Character const & src)
{
	*this = src;
}
Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;

	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		std::cout << "- cloning inventory box " << i << " -" << std::endl;
		this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if(!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
	}
} 

void Character::unequip(int idx)
{
	_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx])
		_inventory[idx]->use(target);
}