/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:22:31 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/25 11:57:53 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:

		Brain* _db;
	
	public:

		Dog();
		Dog(Dog const & src);
		virtual ~Dog();

		Dog & operator=(Dog const & rhs);
		
		void	makeSound() const;
		std::string	getIdea(int i) const;
};

#endif