/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:06:37 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/12 14:08:34 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			argv[i][j] = std::toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (argv[i])
		std::cout << argv[i++];
	std::cout << std::endl;
	return (0);
}