/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:11:53 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/18 18:25:09 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Murcielapotamo insensato")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rsh)
{
	this->_type = rsh._type;
	
	return *this;
}

std::string	WrongAnimal::getType() const
{ 
	return ("I`m a marbellous and motherfucker " + _type);
}

void	WrongAnimal::makeSound() const
{
	std::cout	<< "Aupa el Logroñes!!!" << std::endl;
}