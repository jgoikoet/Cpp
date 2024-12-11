/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:32:23 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/19 14:12:22 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_db = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _db;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	this->_db = rhs._db;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Gurruguau!!!" << std::endl;
}

std::string Dog::getIdea(int i) const
{
	return  _db->getIdeas()[i];
}