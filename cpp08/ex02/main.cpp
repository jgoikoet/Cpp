/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:15:12 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/14 18:59:45 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl << std::endl;
	std::cout << "---- MutanStack Results: ----" << std::endl << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << "smstack.top = " << mstack.top() << std::endl;
	
	mstack.pop();
	std::cout << "smstack.size = " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(68);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	
	std::cout << std::endl << "All the content in mstack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(mstack);
	
	std::cout << std::endl << "s.top (mstack copy)= " << s.top() << std::endl;
	std::cout << "mstack.top = " << mstack.top() << std::endl;
	
	std::cout << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl << std::endl;
	
	std::cout << "---- list Results whith same inputs: ----" << std::endl << std::endl;
	
	std::list<int> l;
	
	l.push_back(5);
	l.push_back(17);
	std::cout << "top (l.back) = " << l.back() << std::endl;
	
	l.pop_back();
	std::cout << "l.size = " << l.size() << std::endl;
	
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(68);
	
	std::list<int>::iterator it_l = l.begin();
	std::list<int>::iterator ite_l = l.end();
	++it;
	--it;
	
	std::cout << std::endl << "All the content in l:" << std::endl;
	while (it_l != ite_l)
	{
		std::cout << *it_l << std::endl;
		++it_l;
	}
	
	std::list<int> l2(l);
	
	std::cout << std::endl << "top (l2.back (l copy))= " << l2.back() << std::endl;
	std::cout << "top (l.back) = " << l.back() << std::endl;
	
	std::cout << "👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾 👾" << std::endl << std::endl;

	
	return  0;
}