/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:13:52 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/25 11:57:01 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	//AAnimal test;
	
	Dog* a = new Dog();
	const AAnimal* w = new Cat();
	
	Dog* copyDog = a;
	const AAnimal* copyCat = w;

	const AAnimal* ar[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			ar[i] = new Dog();
		else
			ar[i] = new Cat();
	}

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;

	std::cout << "Prueba copia dog: " << copyDog->getType() << std::endl;
	copyDog->makeSound();
	std::cout << copyDog->getType() << " is thinking: \"" << copyDog->getIdea(0) << "\"" << std::endl;
	std::cout << "Prueba copia Animal cat: " << copyCat->getType() << std::endl;
	copyCat->makeSound();
	std::cout << copyCat->getType() << " is thinking: \"" << copyCat->getIdea(9) << "\"" << std::endl;

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;
	
	std::cout << "PROBANDO LOS ANIMALICOS DEL ARRAY" << std::endl << std::endl;
	for(int i = 0; i < 10; i++)
		std::cout << ar[i]->getType() << " is thinking: \"" <<ar[i]->getIdea(i + 2) << "\"" << std::endl;

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;
	
	for (int i = 0; i < 10; i++)
		delete ar[i];

	delete a;
	delete w;

	return 0;
}