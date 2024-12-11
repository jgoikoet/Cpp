/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:13:52 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/25 11:56:01 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{	
	Dog basic;
	{
		Dog tmp = basic;
	}	
	Dog* a = new Dog();
	const Animal* z = new Dog();
	const Animal* w = new Cat();
	
	Dog* copyDog = a;
	const Animal* copyCat = w;

	const Animal* ar[10];
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

	std::cout << "soy z Animal-dog " << z->getIdea(9) << std::endl;
	std::cout << a->getType() << " is thinking: \"" << a->getIdea(1) << "\"" << std::endl;
	std::cout << a->getType() << " is thinking: \"" << a->getIdea(2) << "\"" << std::endl;
	
	std::cout << std::endl << "-----------------------" << std::endl << std::endl;
	
	std::cout << "PROBANDO LOS ANIMALICOS DEL ARRAY" << std::endl << std::endl;
	for(int i = 0; i < 10; i++)
		std::cout << ar[i]->getType() << " is thinking: \"" <<ar[i]->getIdea(i + 2) << "\"" << std::endl;

	std::cout << std::endl << "-----------------------" << std::endl << std::endl;
	
	for (int i = 0; i < 10; i++)
		delete ar[i];

	delete a;
	delete z;
	delete w;

	return 0;
}