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
	//AAnimal *x = new AAnimal;
	AAnimal *x = new Dog;
	Cat y("cat");
	Dog z("dog");

	x->getType();
	x->makeSound();
	
	y.getType();
	y.makeSound();

	z.getType();
	z.makeSound();

	delete x;
}