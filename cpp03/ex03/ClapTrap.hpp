/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:38:23 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 19:10:09 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
# include <string>

class ClapTrap
{
	protected:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
		
	public:

		ClapTrap	(void);
		ClapTrap	(std::string name);
		ClapTrap	(ClapTrap const & src);
		~ClapTrap	(void);
		ClapTrap &	operator=(ClapTrap const & rhs);
			
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		showStatus(void);
		
		void		setHitP(int n);
		void		setEnergyP(int n);
		void		setAttackD(int n);
};

#endif