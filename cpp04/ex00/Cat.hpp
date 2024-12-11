/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:40:07 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/18 18:28:18 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(Cat const & src);
		~Cat();

		Cat & operator=(Cat const & rhs);
		
		void	makeSound() const;
};

#endif