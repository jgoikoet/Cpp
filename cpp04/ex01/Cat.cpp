/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:41:27 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/05/22 13:34:53 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_cb = new Brain();
}

Cat::Cat(Cat const & src) : Animal(src)
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
	this->_cb = new Brain();
	for (int i = 0; i < 100; i++)
		this->_cb->setIdeas(i, _cb->getIdeas(i));
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miauuuuuu!!!" << std::endl;
}

std::string Cat::getIdea(int i) const
{
	return  _cb->getIdeas(i);
}