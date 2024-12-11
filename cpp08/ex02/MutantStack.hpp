/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:11:41 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/14 18:59:36 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
#include <stack>
#include <deque>

/*funciones de stack:
empty, size, top, push, pop, y emplace*/

template <typename T, typename Container=std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
			
		MutantStack(void) {}
		MutantStack(MutantStack const & src):  std::stack<T, Container>(src) {}

		~MutantStack(void) {}

		MutantStack & operator=(MutantStack const & rhs)
		{
			if (this != &rhs)
				std::stack<T, std::deque<T> >::operator=(rhs);
			return (*this);
		}

		typedef typename Container::iterator iterator;

		iterator begin(void)
		{
			return (this->c.begin());
		}

		iterator end(void)
		{
			return (this->c.end());
		}
};

#endif