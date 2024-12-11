/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:47:37 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/02/29 12:10:06 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"
# include "Data.hpp"

int	main(void)
{
	//Serializer a;
	Data	*d = new Data;
	Data	d2;


	Data *f = Serializer::deserialize(Serializer::serialize(d));
	Data *f2 = Serializer::deserialize(Serializer::serialize(&d2));

	std::cout << std::endl << "                               d = " << d << std::endl;
	std::cout << "f(d serialized and deserialized) = " << f << std::endl << std::endl;
	std::cout << "                                &d2 = " << &d2 << std::endl;
	std::cout << "f2(&d2 serialized and deserialized) = " << f2 << std::endl << std::endl;

	f2->i = 68;
	std::cout << f2->i << std::endl;
	
	delete (d);
	return 0;	
}