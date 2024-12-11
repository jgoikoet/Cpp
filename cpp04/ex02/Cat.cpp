/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:41:27 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/19 14:13:02 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_cb = new Brain();
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _cb;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	this->_cb = rhs._cb;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miauuuuuu!!!" << std::endl;
}

std::string Cat::getIdea(int i) const
{
	return  _cb->getIdeas()[i];
}