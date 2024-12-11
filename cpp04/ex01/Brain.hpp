/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:03:52 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/25 11:33:20 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	private:
		
		std::string	_ideas[100];
	
	public:

		Brain();
		Brain(Brain const & src);
		~Brain();

		Brain & operator=(Brain const & rhs);

		std::string	getIdeas(int i);
		void		setIdeas(int i, std::string idea);		
};

#endif