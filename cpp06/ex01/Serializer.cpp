/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:50:21 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/28 15:36:43 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void){std::cout << "Constructooooooooorrr" << std::endl;}
Serializer::Serializer(Serializer const & src)
{
	*this = src;
}
Serializer::~Serializer(void){std::cout << "Destructooooooooorrr" << std::endl;}

Serializer & Serializer::operator=(Serializer const & rhs)
{
	(void)rhs;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t p = reinterpret_cast<uintptr_t>(ptr);
	return p;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *ptr = reinterpret_cast<Data *>(raw);
	return ptr;
}

