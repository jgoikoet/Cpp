/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 17:03:41 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/25 17:49:11 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(std::string input): _input(input){}

RPN::~RPN(){}

RPN::RPN(RPN const & src) {*this = src;}

RPN & RPN::operator=(RPN const & rhs){
	this->_input = rhs._input;
	return *this;
}

int	RPN::checkError()
{
	for(int i = 0; _input[i]; i++)
	{
		if (!isdigit(_input[i]) && _input[i] != ' ' && _input[i] != '*' && \
			_input[i] != '/' && _input[i] != '+' && _input[i] != '-')
			return (std::cout << "Error" << std::endl, 1);
		if (isdigit(_input[i]) && isdigit(_input[i + 1]))
			return (std::cout << "Error" << std::endl, 1);
	}
	return 0;
}

int	RPN::calculate()
{
	if (checkError())
		return 1;
	
	for(int i = 0; _input[i]; i++)
	{
		if (isdigit(_input[i]))
			_s.push(_input[i] - '0');
		
		if (_input[i] == '*' || _input[i] == '/' || \
			_input[i] == '+' || _input[i] == '-')
		{
			if (makeCalculation(_input[i]))
				return(std::cout << "Error: not enought numbers" << std::endl,  1);
		}
	}
	std::cout << _s.top() << std::endl;
	return 0;
}

int	RPN::makeCalculation(char c)
{
	if (_s.size() < 2)
		return 1;

	int b = _s.top();
	_s.pop();
	int a = _s.top();
	_s.pop();
	
	if (c == '+')
		_s.push(a + b);
	else if (c == '-')
		_s.push(a - b);
	else if (c == '*')
		_s.push(a * b);
	else if (c == '/')
		_s.push(a / b);
	
	return 0;
}

