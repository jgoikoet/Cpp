/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:19:23 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/18 18:02:14 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>


class Animal
{
	protected:
		
		std::string	_type;
	
	public:

		Animal();
		Animal(Animal const & src);
		virtual ~Animal();

		Animal & operator=(Animal const & rhs);

		virtual void makeSound() const;
		std::string	getType() const;
};

#endif