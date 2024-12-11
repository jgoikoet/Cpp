/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:38:42 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/19 13:29:23 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef BITCOINEXCHANGE_H
# define BITCOINEXCHANGE_H

#include <iostream>
#include <fstream>
#include <map>
#include <cctype>
#include <sstream>
#include <cstdlib> 

class Data
{
	private:

		std::map<std::string, float> _b;
	
	public:
		
		Data(void);
		Data(Data const & src);
		~Data(void);

		Data & operator=(Data const &rhs);
		
		void		mapSet(std::map<std::string, float> b);
		float 		getMap(std::string input);
};

int	errorCheckInput(std::string d);
int	errorCheckData(std::string d);

#endif