/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:43:48 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/26 11:10:43 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Cure.hpp"

Cure::Cure() 
{
	std::cout << "Cure defaul constructor called" << std::endl;
	_type = "cure";
}

Cure::Cure(Cure const & src)
{
	*this = src;
}

Cure::~Cure()
{
	std::cout << "Cure defaul destructor called" << std::endl;
}

Cure & Cure::operator=(Cure const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria*	Cure::clone() const
{
	std::cout << "Cure clone called. Allocating new Ice" << std::endl;
	AMateria* clone = new Cure(*this);
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "`s wounds *" << std::endl;
}