/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:47 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/10/04 13:27:27 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"

int main()
{
	std::vector<int>	v;
	int					n;

	v.push_back (2000);
	v.push_back (200);
	v.push_back (30);
	v.push_back (2);
	v.push_back (20);

	n = 200;
	
	easyfind(v, n);

	return 0;
}