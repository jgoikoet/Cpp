/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:34:49 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/23 13:56:58 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <vector>
#include <utility>
#include <iostream>
#include <sstream>
#include <ctime>
//#include <algorithm>

class Vect
{
	private:

		std::vector<std::pair<int, int> >	_vec;
		int									_odd;
		std::vector<int> 					_vA;
		std::vector<int> 					_vB;
		Vect();

		static bool compare(std::pair<int, int>  a, std::pair<int, int>  b);
		void		sortPairs();
		void		sortvA();
		void		insertN();
		
	public:
	
		Vect(std::vector<std::pair<int, int> > & vec, int odd);
		Vect(Vect const & src);
		~Vect();

		Vect &	operator=(Vect const & rhs);
		
		unsigned int	vBfinalSize();
		void			printResult();
		void			mergeInserSort();
};

class Deque
{
	private:
		
		std::deque<std::pair<int, int> >	_deque;
		int									_odd;
		std::deque<int> 					_vA;
		std::deque<int> 					_vB;
		Deque();

		static bool compare(std::pair<int, int>  a, std::pair<int, int>  b);
		void		sortPairs();
		void		sortvA();
		void		insertN();
	
	public:
	
		Deque(std::deque<std::pair<int, int> > & deq, int odd);
		Deque(Deque const & src);
		~Deque();

		Deque &	operator=(Deque const & rhs);
		
		unsigned int	vBfinalSize();
		void			printResult();
		void			mergeInserSort();
};