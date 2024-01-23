/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:10:55 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/17 14:22:33 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cmath>
#include <ctime>

Base::~Base()
{
	std::cout << "\e[0;31mDestructor called of Base\e[0m" << std::endl;
}

Base * generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (new A());
	}
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "TypeObjec: A"<< '\n';
	else if (dynamic_cast<B *>(p))
		std::cout << "TypeObjec: B"<< '\n';
	else if (dynamic_cast<C *>(p))
		std::cout << "TypeObjec: C" << '\n';
	else 
		std::cout << "ERROR: unidentified!" << '\n';
}

void identify(Base& p)
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "TypeObjecPointed: A"<< '\n';
	}
	catch(const std::exception& e)
	{
		try
		{
			B b = dynamic_cast<B &>(p);
			std::cout << "TypeObjecPointed: B"<< '\n';
		}
		catch(const std::exception& e)
		{
			try
			{
				C c = dynamic_cast<C &>(p);
				std::cout << "TypeObjecPointed: C"<< '\n';
			}
			catch(const std::exception& e)
			{
				std::cout << "ERROR: not indentified!" << '\n';
			}	
		}
	}
}