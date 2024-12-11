/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:52:50 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/26 11:15:59 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

/* int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
} */

int main()
{
		std::cout << std::endl << "*  IMateriaSource* src = new MateriaSource();" << std::endl << std::endl;
	IMateriaSource* src = new MateriaSource();
		std::cout << std::endl << "-------------------" << std::endl << std::endl;


		std::cout << std::endl << "* src->learnMateria(new Ice());" << std::endl << std::endl;
	src->learnMateria(new Ice());
		std::cout << std::endl << "-------------------" << std::endl << std::endl;

		std::cout << std::endl << "* src->learnMateria(new Cure());" << std::endl << std::endl;
	src->learnMateria(new Cure());
		std::cout << std::endl << "-------------------" << std::endl << std::endl;
		
		std::cout << std::endl << "* ICharacter* me = new Character('PEPIÑO');" << std::endl << std::endl;
	ICharacter* me = new Character("PEPIÑO");
		std::cout << std::endl << "------------------" << std::endl << std::endl;
		
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
		std::cout << std::endl << "*  ICharacter* bob = new Character('MARIATERESA');" << std::endl << std::endl;
	ICharacter* bob = new Character("MARIATERESA");
		std::cout << std::endl << "-------------------" << std::endl << std::endl;
	
	
		std::cout << std::endl << "*  me->use(0, *bob);" << std::endl << std::endl;	
	me->use(0, *bob);
		std::cout << std::endl << "-------------------" << std::endl << std::endl;
	
	
		std::cout << std::endl << "*  me->use(1, *bob);" << std::endl << std::endl;
	me->use(1, *bob);
		std::cout << std::endl << "-------------------" << std::endl << std::endl;
	
	
		std::cout << std::endl << "*  delete bob;" << std::endl << std::endl;
	delete bob;
		std::cout << std::endl << "-------------------" << std::endl << std::endl;
	
	
		std::cout << std::endl << "*  delete me;" << std::endl << std::endl;
	delete me;
		std::cout << std::endl << "-------------------" << std::endl << std::endl;
	
	
		std::cout << std::endl << "*  delete src;" << std::endl << std::endl;
	delete src;
		std::cout << std::endl << "-------------------" << std::endl;
		std::cout << "-------------------" << std::endl << std::endl;
	
	return 0;
}