/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:09:59 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/07 16:01:54 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef ITER_H
# define ITER_H

template <typename T>
void	iter(T * ar, int len, void (* call)(T const &))
{
	for (int i = 0; i < len; i++)
		call(ar[i]);
}

#endif