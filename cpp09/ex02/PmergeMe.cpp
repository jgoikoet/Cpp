/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:05:37 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/26 19:28:03 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*----------VECTOR-----------------------------------------------------------------*/

Vect::Vect(){}

Vect::Vect(std::vector<std::pair<int, int> > & vec, int odd): _vec(vec), _odd(odd){}

Vect::~Vect(){}

Vect::Vect(Vect const & src){*this = src;}

Vect &	Vect::operator=(Vect const & rhs)
{
	this->_vec = rhs._vec;
	return *this;
}

bool Vect::compare(std::pair<int, int>  a, std::pair<int, int>  b)
{
	return a.second < b.second;
}

void	Vect::printResult()
{
	for (unsigned int i = 0; i < _vB.size(); i++)
		std::cout << " " << _vB[i];
}

unsigned int	Vect::vBfinalSize()
{
	return _vB.size();
}

void	Vect::insertN()
{
	unsigned int	a = 0, b = 2, i = 0, j = 3, end = 0, limit = 3, temp;

	//std::cout  << std::endl << "---- insertN -----------------------" << std::endl;
	
	while (i < _vA.size())
	{
		end = i + b;
		if (end > _vA.size())
			end = _vA.size();
		if (limit > _vB.size())
			limit = _vB.size();
		//std::cout << "limit = " << limit << std::endl;
		while (i < end)
		{
			std::vector<int>::iterator it = std::upper_bound(_vB.begin(), _vB.begin() + limit, _vA[i]);
    	    _vB.insert(it, _vA[i++]);
		}
		limit = pow(2, j) - 1;
		temp = b;
		b = b + (2 * a);
		a = temp;
		j++;
	}
	if (_odd > -1)
	{
		std::vector<int>::iterator it = std::upper_bound(_vB.begin(), _vB.end(), _odd);
    	_vB.insert(it, _odd);
	}
}

void	Vect::sortvA()
{
	unsigned int	a = 0, b = 2, j = 2, i = 0;
	unsigned int	temp, start, end;
	
	//std::cout  << std::endl << "---- sortvA -----------------------" << std::endl;
	while(i < j)
	{
		start = 0;
		end = j - i;
		while(start < end / 2)
		{
			//std::cout << std::endl << "start = " << start << "; end = " << end << std::endl;
			//std::cout << "i = " << i << "; j = " << j << ": vA.size =" << _vA.size() << std::endl;
        	std::swap(_vA[i], _vA[j - 1 - start]);
			i++;
			start++;
		}
		i = j;
		temp = b;
		b = b + (2 * a);
		a = temp;
		j = b + i;
		if (j > _vA.size())
			j = _vA.size();
		/* for (unsigned int i = 0; i < _vA.size(); i++)
		{
			if (i == 2 || i == 4 || i == 10 || i == 20 || i == 42)
				std::cout << "   ";
			std::cout << " " << _vA[i];
		}
		std::cout << std::endl; */
	}
	//std::cout << std::endl << "-----------------------------------------"  << std::endl;
}

void	Vect::sortPairs()
{
	//std::cout  << std::endl << "---- sortPairs -----------------------" << std::endl;
	for (unsigned int i = 0; i < _vec.size(); i++)
	{
		if (_vec[i].first > _vec[i].second)
			std::swap(_vec[i].first, _vec[i].second);
	}
	std::sort(_vec.begin(), _vec.end(), compare);
	
	for (unsigned int i = 0; i < _vec.size(); i++)
		_vA.push_back(_vec[i].first);

	for (unsigned int i = 0; i < _vec.size(); i++)
		_vB.push_back(_vec[i].second);
	/* if (_odd > -1)
		_vB.push_back(_odd); */
	
	/* for (unsigned int i = 0; i < _vA.size(); i++)
		std::cout << " " << _vA[i];

	std::cout << std::endl;
		
	for (unsigned int i = 0; i < _vB.size(); i++)
		std::cout << " " << _vB[i];

	std::cout << std::endl  << std::endl; */
	_vB.insert(_vB.begin(), _vA[0]);
	_vA.erase(_vA.begin());

	/* for (unsigned int i = 0; i < _vB.size(); i++)
		std::cout << " " << _vB[i];
	std::cout << std::endl;
	for (unsigned int i = 0; i < _vA.size(); i++)
		std::cout << " " << _vA[i];
	std::cout << std::endl;	 */
}

void	Vect::mergeInserSort()
{	
	sortPairs();
	if (_vA.size() > 1)
		sortvA();
	insertN();
}

/*----------DEQUE-----------------------------------------------------------------*/

Deque::Deque(){}

Deque::Deque(std::deque<std::pair<int, int> > & deq, int odd): _deque(deq), _odd(odd){}

Deque::~Deque(){}

Deque::Deque(Deque const & src){*this = src;}

Deque &	Deque::operator=(Deque const & rhs)
{
	this->_deque = rhs._deque;
	return *this;
}

bool Deque::compare(std::pair<int, int>  a, std::pair<int, int>  b)
{
	return a.second < b.second;
}

unsigned int	Deque::vBfinalSize()
{
	return _vB.size();
}

void	Deque::printResult()
{
	for (unsigned int i = 0; i < _vB.size(); i++)
		std::cout  << _vB[i] << " ";
}

void	Deque::insertN()
{
	unsigned int	a = 0, b = 2, i = 0, j = 3, end = 0, limit = 3, temp;

	while (i < _vA.size())
	{
		end = i + b;
		if (end > _vA.size())
			end = _vA.size();
		if (limit > _vB.size())
			limit = _vB.size();
		while (i < end)
		{
			std::deque<int>::iterator it = std::upper_bound(_vB.begin(), _vB.begin() + limit + 1, _vA[i]);
    	    _vB.insert(it, _vA[i++]);
		}
		limit = pow(2, j) - 1;
		temp = b;
		b = b + (2 * a);
		a = temp;
		j++;
	}
	if (_odd > -1)
	{
		std::deque<int>::iterator it = std::upper_bound(_vB.begin(), _vB.end(), _odd);
    	_vB.insert(it, _odd);
	}
}

void	Deque::sortvA()
{
	unsigned int	a = 0, b = 2, j = 2, i = 0;
	unsigned int	temp, start, end;
	
	while(i < j)
	{
		start = 0;
		end = j - i;
		while(start < end / 2)
		{
        	std::swap(_vA[i], _vA[j - 1 - start]);
			i++;
			start++;
		}
		i = j;
		temp = b;
		b = b + (2 * a);
		a = temp;
		j = b + i;
		if (j > _vA.size())
			j = _vA.size();
	}
}

void	Deque::sortPairs()
{
	for (unsigned int i = 0; i < _deque.size(); i++)
	{
		if (_deque[i].first > _deque[i].second)
			std::swap(_deque[i].first, _deque[i].second);
	}
	std::sort(_deque.begin(), _deque.end(), compare);
	
	for (unsigned int i = 0; i < _deque.size(); i++)
		_vA.push_back(_deque[i].first);

	for (unsigned int i = 0; i < _deque.size(); i++)
		_vB.push_back(_deque[i].second);
	_vB.insert(_vB.begin(), _vA[0]);
	_vA.erase(_vA.begin());
}

void	Deque::mergeInserSort()
{	
	sortPairs();
	if (_vA.size() > 1)
		sortvA();
	insertN();
}
