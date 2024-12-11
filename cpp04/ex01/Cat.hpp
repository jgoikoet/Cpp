/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:40:07 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/25 11:50:03 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain* _cb;
	
	public:

		Cat();
		Cat(Cat const & src);
		virtual ~Cat();

		Cat & operator=(Cat const & rhs);
		
		void	makeSound() const;
		std::string	getIdea(int i) const;
};

#endif