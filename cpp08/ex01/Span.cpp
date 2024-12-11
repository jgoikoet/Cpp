/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:46:37 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/12 17:56:15 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {
	sort();
}

Span::~Span() {}

Span::Span(Span const &src)
{
	*this = src;
	return;
}

Span &Span::operator=(Span const &rhs)
{
	this->_N = rhs._N;
	this->_v.insert(this->_v.end(), rhs._v.begin(), rhs._v.end());
	return *this;
}

unsigned int	Span::getSize(void)
{
	return this->_v.size();
}

int		Span::getNumber(size_t i)
{
	return this->_v[i];
}

void Span::addNumber(int n)
{
	if (this->_v.size() == this->_N)
		throw std::out_of_range("\nEXCEPTION! Out of range\n");
	this->_v.push_back(n);
	
	sort();
}

void Span::addMany(std::vector<int>::const_iterator itBegin, std::vector<int>::const_iterator itEnd)
{
	std::size_t numElements = std::distance(itBegin, itEnd);
	
	if ( _v.size() + numElements > _N )
        throw std::out_of_range("\nEXCEPTION! out of range\n");

    _v.insert( _v.end(), itBegin, itEnd );

	sort();
}

void	Span::sort(void)
{
	_sorted_v.clear();
	
	_sorted_v = _v;

    std::sort(_sorted_v.begin(), _sorted_v.end());
	
}
size_t	Span::shortestSpan(void)
{
	int i;
	
	if (_v.size() < 2)
		throw std::out_of_range("\nEXCEPTION! Less than 2 numbers on vector\n");
	i = _sorted_v[1] - _sorted_v[0];
	
	for(unsigned int j = 1; j < _sorted_v.size() - 1; j++)
	{
		if (_sorted_v[j + 1] - _sorted_v[j] < i)
			i = _sorted_v[j + 1] - _sorted_v[j];
	}
	return i;
}
size_t	Span::longestSpan(void)
{
	
	if (_v.size() < 2)
		throw std::out_of_range("\nEXCEPTION! Less than 2 numbers on vector\n");
	
	return _sorted_v[_sorted_v.size() - 1] - _sorted_v[0];
}