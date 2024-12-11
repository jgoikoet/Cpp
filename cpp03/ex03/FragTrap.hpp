/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:30:11 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 19:28:53 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:

		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &  src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const & src);
		
		void highFivesGuys(void);
		void	showStatus(void);
};

#endif