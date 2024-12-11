/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:47:15 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/12 15:56:23 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef SPAN_H
# define SPAN_H

#include <vector>
#include <algorithm>

class Span
{
	private:

		unsigned int		_N;
		std::vector<int>	_v;
		std::vector<int>	_sorted_v;
		
		void				sort(void);

	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span(Span const & src);
		Span & operator=(Span const & rhs);
		
		int				getNumber(size_t i);
		unsigned int	getSize(void);
		void			addNumber(int n);
		void			addMany(std::vector<int>::const_iterator itBegin, std::vector<int>::const_iterator itEnd);

		size_t	shortestSpan(void);
		size_t	longestSpan(void);
}; 

#endif