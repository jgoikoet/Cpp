/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:16:09 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/22 12:31:51 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{

	private:
	
		std::string _name;
		AMateria *	_inventory[4];
	
	public:
	
		Character();
		Character(std::string name);
		Character (Character const & src);
		~Character();
		Character & operator=(Character const & rhs);

		std::string const & getName() const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);
};

#endif