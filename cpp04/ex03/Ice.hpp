/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:08:10 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/25 13:37:36 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
	
		Ice();
		Ice(Ice const & src);
		~Ice();
		Ice	& operator=(Ice const & rhs);
		
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif