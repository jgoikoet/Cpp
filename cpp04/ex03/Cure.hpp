/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:14:32 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/25 13:37:54 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
	
		Cure();
		Cure(Cure const & src);
		~Cure();
		Cure	& operator=(Cure const & rhs);
		
		AMateria*	clone() const;
		void	use(ICharacter& target);
};

#endif