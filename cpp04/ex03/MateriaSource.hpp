/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:31:50 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/22 17:12:05 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
	
		AMateria* _materias[4];
	
	public:

		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();
		MateriaSource  & operator=(MateriaSource const & rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

};

#endif