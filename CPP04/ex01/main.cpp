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
	unsigned int n = 9;
	Animal *horde[n];

	for (unsigned int i = 0; i < n; i++)
		i < n/2 ? horde[i] = new Cat() : horde[i] = new Dog();
	for (unsigned int i = 0; i < n; i++)
		horde[i]->makeSound();
	for (unsigned int i = 0; i < n; i++)
		delete horde[i];
}