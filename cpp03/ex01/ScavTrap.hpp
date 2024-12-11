/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:53:52 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/16 10:14:16 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRTAP_H
# define SCAVTRTAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &  src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & src);
		
		void	attack(const std::string& target);
		void	guardGate();
};

#endif