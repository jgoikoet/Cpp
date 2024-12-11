/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:11:09 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/18 18:27:24 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>


class WrongAnimal
{
	protected:
		
		std::string	_type;
	
	public:

		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & rhs);

		void makeSound() const;
		std::string	getType() const;
};

#endif