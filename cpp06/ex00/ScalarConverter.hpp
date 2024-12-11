/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:59:31 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/28 12:38:09 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

#include <iostream>
#include <string>

class ScalarConverter
{
	private:

		ScalarConverter(void);
		ScalarConverter(ScalarConverter const & src);
		ScalarConverter & operator=(ScalarConverter const & rhs);
		
	public:
	
		~ScalarConverter(void);
		static void    ft_convert(std::string s);
};

#endif