/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:03:52 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/18 20:05:10 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	protected:
		
		std::string	_ideas[100];
	
	public:

		Brain();
		Brain(Brain const & src);
		~Brain();

		Brain & operator=(Brain const & rhs);

		std::string * getIdeas();
};

#endif