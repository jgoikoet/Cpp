/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:34:18 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/06 13:41:34 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef WHATEVER_H
# define WHATEVER_H

/* template< typename T >
T const & max(T const & x, T const & y)
{
	return (x >= y ? x : y);
} */

template< typename T >
void swap(T & a, T & b)
{
	T  temp;
	
	temp = a;
	a = b;
	b = temp;
}

template< typename T >
T const & min(T & a, T & b)
{
	return (a < b ? a : b);
}

template< typename T >
T const & max(T & a, T & b)
{
	return (a > b ? a : b);
}

# endif