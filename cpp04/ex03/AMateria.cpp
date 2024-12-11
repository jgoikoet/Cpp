/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:00:51 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/24 10:33:21 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Unknow")
{
	std::cout << "AMateria defaul constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria parametriced constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria defaul destructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria & AMateria::operator=(AMateria const & rhs)
{
	this->_type = rhs._type;

	return *this;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* shoots at " << target.getName() << " *" << std::endl;
}