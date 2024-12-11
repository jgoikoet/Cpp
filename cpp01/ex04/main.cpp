/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 13:55:46 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/29 19:29:44 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "💩 Incorrect number of arguments you loser 💩" << std::endl;
		return (1);
	}
	std::ifstream	ifs(argv[1]);
	if (!ifs.is_open()) {
        std::cout << "💩 Can`t open " << "'" << argv[1] << "'" << " you loser 💩" << std::endl;
        return 1;
    }
	
	std::string tot;
    std::string line;
	char	c;

	while (ifs.get(c))
		tot += c;
	ft_change(tot, argv[1], argv[2], argv[3]);
	
	ifs.close();

	return (0);
}