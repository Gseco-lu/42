/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:46:01 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:46:01 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* a = new Animal();
	const Animal* b = new Dog("dog");
	const Animal* c = new Cat();
	const Animal* d = new Animal("animal");
	const WrongAnimal* f = new WrongCat();
	const WrongAnimal* g = new WrongAnimal();
	
	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	std::cout << f->getType() << " " << std::endl;
	std::cout << g->getType() << " " << std::endl;

	a->makeSound(); 
	b->makeSound(); 
	c->makeSound();
	d->makeSound();
	f->makeSound();
	g->makeSound();
	
	delete a;
	delete b;
	delete c;
	delete d;
	delete f;
	delete g;
	return 0;
}