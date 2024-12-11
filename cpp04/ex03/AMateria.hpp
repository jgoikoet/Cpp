/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:02:50 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/25 13:35:41 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class ICharacter; //ojo con esto

class AMateria
{
	protected:
	
		std::string _type;
	
	public:
	
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria();
	AMateria & operator=(AMateria const & rhs);

	std::string const & getType() const;
	virtual AMateria* 	clone() const = 0;
	virtual void 		use(ICharacter& target);
};

#endif