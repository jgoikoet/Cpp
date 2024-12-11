/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:22:31 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/18 17:58:20 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog();
		Dog(Dog const & src);
		~Dog();

		Dog & operator=(Dog const & rhs);
		
		void	makeSound() const;
};

#endif