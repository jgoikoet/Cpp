/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:25:48 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/19 18:13:06 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef RPN_H
# define RPN_H

#include <iostream>
#include <cctype>
#include <stack>

class RPN
{
	private:
	
		std::stack<int> _s;
		std::string		_input;

		RPN();
		int	makeCalculation(char c);
		
	public:

		RPN(std::string input);
		~RPN();
		RPN(RPN const & src);
		RPN & operator=(RPN const & rhs);

		/* void	pushStack();
		int 	topStack(int n);
		int		sizeStack(); */
		
		int		checkError();
		int		calculate();
};

#endif