/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:46:31 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:46:31 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int n = 7;
	Animal *group[n];
	Animal *q = new Animal();

	(void) q;
	for (int i = 0; i < n; i++)
	{
		if (n/2 > i)
			group[i] = new Cat();
		else
			 group[i] = new Dog();
	}
	for (int i = 0; i < n; i++)
		group[i]->makeSound();
	for (int i = 0; i < n; i++)
		delete group[i];
	delete q;
}