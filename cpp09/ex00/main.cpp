/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:37:59 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/25 18:21:12 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "BitcoinExchange.hpp"

void printError(std::string line, int i)
{
	if (i == 1)
		std::cout << "Error: bad input => " << line << std::endl;
	else if (i == 2)
		std::cout << "Error: not a positive number." << std::endl;
	else
		std::cout << "Error: to large a number." << std::endl;
}


void	printResult(Data d, std::string line)
{
	int		year;
	int 	month;
	int		day;
	float	amount;
	float	rate;
	
	std::istringstream(line.substr(0, 4)) >> year;
	std::istringstream(line.substr(5, 2)) >> month;
	std::istringstream(line.substr(8, 2)) >> day;
	
	
	if (year < 2009 || (year == 2009 && month == 1 && day < 2))
	{
		std::cout << "Error: No data before 2009-01-02 melon" << std::endl;
		return;
	}
	if (year > 2024)
	{
		std::cout << "Error: No data from future motherfucker" << std::endl;
		return;
	}
	rate = d.getMap(line.substr(0, 10));
	std::string n = &line[13];
    amount = atof(n.c_str());
	std::cout << line.substr(0, 10) << " => " << amount << " = " << rate * amount << std::endl;
}

void	result(Data d, std::ifstream & input)
{
	std::string line;
	int			n;
	
	std::getline(input, line);
	while (std::getline(input, line))
	{
		n = errorCheckInput(line);
		if (n == 0)
			printResult(d, line);
		else if (n == 1)
			printError(line, 1);
		else if (n == 2)
			printError(line, 2);
		else
			printError(line, 3);
	}
}

void	createMap(std::ifstream & dataBase, std::ifstream & input)
{
	std::string 					line;
	std::string 					n;
	std::map<std::string, float>	b;
	float							f;
	Data							d;
	
	std::getline(dataBase, line);
	while(std::getline(dataBase, line))
	{
		if (errorCheckData(line) == 0)
		{
			n = &line[11];
    		f = atof(n.c_str()); 
			b[line.substr(0, 10)] = f;
		}
	}
	d.mapSet(b);
	result (d, input);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Incorrect number of arguments." << std::endl;
		return 1;
	}
	
	std::ifstream input(argv[1]);
	if (!input.is_open())
	{
    	std::cerr << "Error: could not open input file." << std::endl;
    	return 1;
    }
	
	std::ifstream dataBase("data.csv");
	if (!dataBase.is_open())
	{
    	std::cerr << "Error: could not open data base." << std::endl;
    	return 1;
    }
	createMap(dataBase, input);
	dataBase.close();
	input.close();
	
	return 0;
}
