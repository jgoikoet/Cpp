/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:19:23 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/19 15:46:29 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class AAnimal
{
	protected:
		
		std::string	_type;
	
	public:

		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		AAnimal & operator=(AAnimal const & rhs);

		virtual void makeSound() const = 0;
		virtual std::string	getIdea(int i) const;
		std::string	getType() const;
};

#endif