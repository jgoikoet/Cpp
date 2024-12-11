/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:38:45 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/25 17:16:47 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Data::Data(){}

Data::~Data(){}

Data::Data(Data const & src){*this = src;}

Data & Data::operator=(Data const &rhs)
{
	this->_b = rhs._b;

	return *this;
}


void	Data::mapSet(std::map<std::string, float> b)
{
	this->_b = b;
}

float 	Data::getMap(std::string input)
{
	float		f;
	std::map<std::string, float>::iterator iti;
	std::map<std::string, float>::iterator ito;
	
	iti = _b.begin();
	ito = _b.end();
	ito--;
	
	if (input > ito->first)
		return (ito->second);
	ito++;
	while(iti != ito)
	{
		f = iti->second;
		if (iti->first == input)
			return f;
		iti++;
		if (iti->first > input)
			return f;
	}
	return 0;
}

int	leapCheck(int year)
{
	int y = 2012;
	int	i = 0;
	
	while (i < 4)
	{
		if (year == y)
			return 1;
		y += 4;
		i++;
	}
	return 0;
}

int	dateError(std::string d)
{
	int year;
	int month;
	int	day;
	std::istringstream(d.substr(0, 4)) >> year;
	std::istringstream(d.substr(5, 2)) >> month;
	std::istringstream(d.substr(8, 2)) >> day;

	if (month < 1 || month > 12)
		return 1;
	if ((month == 1 || month == 3  || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		&& (day < 1 || day > 31))
		return (1);
	if ((month == 4 || month == 6  || month == 9 || month == 11)
		&& (day < 1 || day > 30))
		return (1);
	if (leapCheck(year))
	{
		if (month == 2 && (day < 1 || day > 29))
			return 1;
	}
	else
	{
		if (month == 2 && (day < 1 || day > 28))
			return 1;
	}
	
	return 0;
}

int	errorCheckInput(std::string d)
{	
	if (d.size() < 12)
		return 1;
	
	if (!std::isdigit(d[0]) || !std::isdigit(d[1]) || !std::isdigit(d[2]) || \
		!std::isdigit(d[3]) || !std::isdigit(d[5])|| !std::isdigit(d[6])  || \
		!std::isdigit(d[8])|| !std::isdigit(d[9]) || d[4] != '-' || d[7] != '-' || \
		d[10] != ' ' || d[11] != '|' || d[12] != ' ')
			return 1;
			
	int i = 13;
	
	if (d[i] != '+' && d[i] != '-' && !std::isdigit(d[i]))
		return 1;
	i++;
	if ((d[i - 1] == '+' || d[i - 1] == '+') && !d[i])
		return 1;
	int j = 0;
	while(d[i])
	{
		if (!std::isdigit(d[i]) && d[i] != '.')
			return 1;
		if (d[i++] == '.')
			j++;
	}
	if (j > 1)
		return 1;
	
	if (dateError(d.substr(0, 10)))
		return 1;
	
	std::string n = &d[13];
    float		f = atof(n.c_str());
	if (f < 0)
		return 2;
	if (f > 1000)
		return 3;

	return 0;
}

int	errorCheckData(std::string d)
{	
	if (d.size() < 12)
		return 1;
	
	if (!std::isdigit(d[0]) || !std::isdigit(d[1]) || !std::isdigit(d[2]) || \
		!std::isdigit(d[3]) || !std::isdigit(d[5])|| !std::isdigit(d[6])  || \
		!std::isdigit(d[8])|| !std::isdigit(d[9]) || d[4] != '-' || d[7] != '-' || \
		d[10] != ',')
			return 1;
			
	int i = 11;
	
	if (d[i] != '+' && d[i] != '-' && !std::isdigit(d[i]))
		return 1;
	i++;
	if ((d[i - 1] == '+' || d[i - 1] == '+') && !d[i])
		return 1;
	int j = 0;
	while(d[i])
	{
		if (!std::isdigit(d[i]) && d[i] != '.')
			return 1;
		if (d[i++] == '.')
			j++;
	}
	if (j > 1)
		return 1;
	
	return 0;
}