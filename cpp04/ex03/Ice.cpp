/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:29:01 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/26 11:10:18 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() 
{
	std::cout << "Ice defaul constructor called" << std::endl;
	_type = "ice";
}

Ice::Ice(Ice const & src)
{
	*this = src;
}

Ice::~Ice()
{
	std::cout << "Ice defaul destructor called" << std::endl;
}

Ice & Ice::operator=(Ice const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

AMateria*	Ice::clone() const
{
	std::cout << "Ice clone called. Allocating new Ice" << std::endl;
	AMateria * clone = new Ice(*this);
	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}