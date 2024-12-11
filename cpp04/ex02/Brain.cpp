/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:03:56 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/19 16:01:59 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;

	_ideas[0] = "Me voy a rascar los huevos";
	_ideas[1] = "Voy a votar al PNV";
	_ideas[2] = "Creo que he resuelto la teoria del todo";
	_ideas[3] = "Me paice que Amama fuma porros";
	_ideas[4] = "Que ganas de tirarme un cuesco";
	_ideas[5] = "Parece que refresca";
	_ideas[6] = "Me voy a pillar un pedo a whiskitos";
	_ideas[7] = "Todo el mundo es tonto";
	_ideas[8] = "Con Franco eramos mas jovenes";
	_ideas[9] = "Yo seria un cantante de la hostia si no fuese por la voz";
	_ideas[10] = "¡ay que hambre!";
	for (int i = 11; i < 100; i++)
		_ideas[i] = "No me se ocurre mas na... 🥴";
}
Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}

std::string * Brain::getIdeas()
{
	return _ideas;
}