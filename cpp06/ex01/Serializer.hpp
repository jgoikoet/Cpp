/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:48:40 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/08/08 12:57:27 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once

#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include "Data.hpp"

class Serializer
{
	private:

		Serializer(void);
		Serializer(Serializer const & src);
		Serializer & operator=(Serializer const & rhs);
		
	public:
	
		~Serializer(void);
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif