/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:46:53 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:46:53 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//AAnimal *q = new AAnimal();
	AAnimal *x = new Dog;
	Cat y("cat");
	Dog z("dog");

	std::cout << x->getType() << " " << std::endl;
	x->makeSound();
	std::cout << y.getType() << " " << std::endl;
	y.makeSound();
	std::cout << z.getType() << " " << std::endl;
	z.makeSound();

	delete x;
}