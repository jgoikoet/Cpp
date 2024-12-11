/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:33:19 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/24 12:04:29 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	dequeSort(char **n, int limit, int odd)
{
	double start = clock();
	
	std::deque<std::pair<int, int> >	vec;
	int									i = 1;

	while (i < limit)
	{
		std::pair <int, int> p;
		std::istringstream one(n[i++]);
		if(!(one >> p.first) || p.first < 0)
			return (std::cerr << "Error: arguments must be positive integers" << std::endl, 1);
		std::istringstream two(n[i++]);
		if(!(two >> p.second) || p.second < 0)
			return (std::cerr << "Error: arguments must be positive integers" << std::endl, 1);
		vec.push_back(p);
	}
	Deque d(vec, odd);
	d.mergeInserSort();

	double end = clock();
	double duration = (end - start) * 1000 / CLOCKS_PER_SEC;
	
	/* std::cout << "After:  ";
	d.printResult();
	std::cout << std::endl; */
	
	std::cout << "Time to process a range of " << d.vBfinalSize() \
	<< " elements with std::deque  " << duration << " miliseconds" <<std::endl;
	
	return (0);
}

int	vectorSort(char **n, int limit, int odd)
{
	double start = clock();
	
	std::vector<std::pair<int, int> >	vec;
	int									i = 1;

	while (i < limit)
	{
		std::pair <int, int> p;
		std::istringstream one(n[i++]);
		if(!(one >> p.first) || p.first < 0)
			return (std::cerr << "Error: arguments must be positive integers" << std::endl, 1);
		std::istringstream two(n[i++]);
		if(!(two >> p.second) || p.second < 0)
			return (std::cerr << "Error: arguments must be positive integers" << std::endl, 1);
		vec.push_back(p);
	}
	
	Vect v(vec, odd);
	v.mergeInserSort();
	
	double end = clock();
	double duration = (end - start) * 1000 / CLOCKS_PER_SEC;
	
	std::cout << "After: ";
	v.printResult();
	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << v.vBfinalSize() \
	<< " elements with std::vector " << duration << " miliseconds" <<std::endl;
	
	return (0); 
}
int	error(char **ar)
{
	int	j;

	for (int i = 1; ar[i]; i++)
	{
		j = 0;
		while(ar[i][j])
		{
			while (ar[i][j] && ar[i][j] == ' ')
				j++;
			while (ar[i][j] && isdigit(ar[i][j]))
				j++;
			while (ar[i][j])
			{
				if(ar[i][j++] != ' ')
					return 1;
			}
		}
	}
	return 0;
}

int main(int argc, char **argv)
{
	std::deque<std::pair<int, int> >	deq;
	std::vector<std::pair<int, int> >	vec;
	int									odd = -1;
	int									limit;
	
	if (argc < 2)
		return (std::cerr << "Error: Need arguments shit-face" << std::endl, 1);
	
	if(argc % 2 == 0)
	{
		std::istringstream iss(argv[argc - 1]);
		if(!(iss >> odd) || odd < 0)
			return (std::cerr << "❌ Error: inapropiated input ❌" << std::endl, 1);
		limit = argc - 2;
	}
	else
		limit = argc - 1;
	
	if (argc == 2)
		return (std::cerr << argv[1] << " is only ONE number so it`s already sorted, you ass-face 😡 😡 😡" << std::endl, 1);
	
	if (error(argv))
		return(std::cout << "❌ Error: inapropiated input ❌" << std::endl, 1);

	std::cout << "Before:";
	for (int i = 1; argv[i]; i++)
		std::cout << " " << argv[i];
	std::cout << std::endl;
	
	vectorSort(argv, limit, odd);
	dequeSort(argv, limit, odd);
	

	
	return 0;
}