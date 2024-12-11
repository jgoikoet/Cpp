/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 16:35:47 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/05/13 18:39:36 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.h"

int	ft_check(std::string tot, std::string s1)
{
	int	i = 0;

	while (s1[i])
	{
		if (s1[i] != tot[i])
			return 1;
		i++;
	}

	return 0;
}

void	ft_change(std::string tot, std::string in, std::string s1, std::string s2)
{
	int	i = 0;

	std::string out = in + ".replace";
	std::ofstream	ofs (out);

	if (s1.size() == 0)
	{
		while(tot[i])
			ofs << tot[i++];
	}
	else
	{
		while(tot[i])
		{
			if (!ft_check(&tot[i] , s1))
			{
				i += s1.size() -1;
				ofs << s2;
			}
			else
				ofs << tot[i];
			i++;
		}
	}
	ofs.close();
}