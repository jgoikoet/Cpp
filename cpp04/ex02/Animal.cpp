/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:19:32 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/19 15:50:21 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : _type("Murcielapotamo")
{
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rsh)
{
	this->_type = rsh._type;
	
	return *this;
}

std::string	AAnimal::getType() const
{ 
	return ("Marbellous " + _type);
}

std::string	AAnimal::getIdea(int i) const
{
	(void) i;
	return ("No me se ocurre na");
}