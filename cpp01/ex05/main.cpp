/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:38:53 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/02 13:44:24 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl comp;

	comp.complain("debug");
	comp.complain("info");
	comp.complain("warning");
	comp.complain("error");
	comp.complain("fuck");

	return (0);
}
