/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:59:12 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/28 12:32:27 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void){}
ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
	*this = src;
}
ScalarConverter::~ScalarConverter(void){}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & rhs)
{
	(void)rhs;
	return *this;
}

void    ScalarConverter::ft_convert(std::string s)
{
	if (s.size() == 1 && (s[0] < '0' || s[0] > '9'))
        s = std::to_string(static_cast<int>(s[0]));

    try
    {
        int     i_value = std::stoi(s);
        if (i_value < 32 || i_value > 126)
            std::cout   << "char: Non displayable" << std::endl;
        else
             std::cout   << "char: " << "'" << static_cast<char>(i_value) << "'" << std::endl;
        std::cout << "int: " << i_value << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "char : impossible " << '\n';
        std::cerr << "int: impossible " << '\n';
    }
    
    /*----------------------------------------------------*/
    
    try
    {
        float   f_value = stof(s);
        if (f_value - static_cast<int>(f_value) != 0)
            std::cout << "float: " << f_value << "f" << std::endl;
        else
            std::cout << "float: " << f_value << ".0f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "float: impossible " << '\n';
    }
    
    /*----------------------------------------------------*/
    
    try
    {
        double  d_value = stod(s);
        if (d_value - static_cast<int>(d_value) != 0)
            std::cout << "double: " << d_value << std::endl;
        else
            std::cout << "float: " << d_value << ".0" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "double: impossible " << '\n';
    }
}

