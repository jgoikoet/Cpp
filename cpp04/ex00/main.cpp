/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:13:52 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/05/21 15:28:27 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();//diferencia
	const Cat* k = new Cat();
	const Animal* meta = new Animal();
	
	const WrongAnimal* x = new WrongAnimal();
	const WrongCat* z = new WrongCat();
	const WrongAnimal* v = new WrongCat();//diferencia
	
	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
	std::cout << "j ☣ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ j" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << "i ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ i" << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << "k ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ k" << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << "meta ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ meta" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << "x ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ x" << std::endl;
	std::cout << x->getType() << " " << std::endl;
	x->makeSound();
	std::cout << "z ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ z" << std::endl;
	std::cout << z->getType() << " " << std::endl;
	z->makeSound();
	std::cout << "v ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ v" << std::endl;
	std::cout << v->getType() << " " << std::endl;
	v->makeSound();
	
	std::cout << std::endl << "☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎ ☣︎" << std::endl << std::endl;
	
	delete meta;
	delete j;
	delete i;
	delete x; 
	delete z; 
	delete k;
	delete v;

	return 0;
}