/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:41:13 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 19:30:30 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
	private:

		std::string	_name;

	public:

		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &  src);
		~DiamondTrap(void);
		DiamondTrap & operator=(DiamondTrap const & src);

		

		using 	ScavTrap::attack;
		using	ClapTrap::showStatus;
		void whoAmI();
};

#endif