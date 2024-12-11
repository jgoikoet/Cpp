/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 13:00:41 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/10/04 13:27:35 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <ctime>

template <typename T>
void	easyfind(T v, int n)
 {
	typename T::iterator it = std::find(v.begin(), v.end(), n);

	if (it != v.end())
		std::cout << "Number " << n << " is in the " << std::distance(v.begin(), it) << " position." << std::endl;
	else
		std::cout << "Number " << n << " not found in the vector." << std::endl;
 }

#endif