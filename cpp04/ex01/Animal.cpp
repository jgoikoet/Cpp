/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:19:32 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/19 14:07:34 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Murcielapotamo")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rsh)
{
	this->_type = rsh._type;
	
	return *this;
}

std::string	Animal::getType() const
{ 
	return ("Marbellous " + _type);
}

void	Animal::makeSound() const
{
	std::cout	<< "Bruugggñññññññ" << std::endl;
}

std::string	Animal::getIdea(int i) const
{
	(void) i;
	return ("No me se ocurre na");
}