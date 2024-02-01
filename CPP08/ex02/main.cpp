/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:24:37 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/02/01 21:01:15 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::list<int> liststest;
	liststest.push_back(5);
	liststest.push_back(17);
	std::cout << liststest.back() << std::endl;
	liststest.pop_back();
	std::cout << liststest.size() << std::endl;
	liststest.push_back(3);
	liststest.push_back(5);
	liststest.push_back(737);
	liststest.push_back(0);
	std::list<int>::iterator it2 = liststest.begin();
	std::list<int>::iterator ite2 = liststest.end();
	++it2;
	--it2;
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	std::cout << "---------------------------------"<< std::endl;

	MutantStack<int> mstack1;
	mstack1.push(5);
	mstack1.push(17);
	std::cout << mstack1.top() << std::endl;
	mstack1.pop();
	std::cout << mstack1.size() << std::endl;
	mstack1.push(3);
	mstack1.push(5);
	mstack1.push(737);
	mstack1.push(0);
	MutantStack<int>::iterator it1 = mstack1.begin();
	MutantStack<int>::iterator ite1 = mstack1.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::stack<int> s1(mstack1);

	std::cout << "---------------------------------"<< std::endl;

	MutantStack<int> mstack2;
	mstack2.push(1);
	mstack2.push(2);
	mstack2.push(3);
	mstack2.push(4);
	mstack2.push(5);
	mstack2.push(6);
	mstack2.push(7);
	mstack2.push(8);
	mstack2.push(9);
	mstack2.push(10);
	mstack2.push(11);
	mstack2.push(12);
	MutantStack<int>::iterator it3 = mstack2.begin();
	MutantStack<int>::iterator ite3 = mstack2.end();
	++it3;
	--it3;
	while (it3 != ite3)
	{
		std::cout << *it3 << std::endl;
		++it3;
	}
	return 0;
}