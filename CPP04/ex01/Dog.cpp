/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:46:27 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:46:27 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Unknown";
	std::cout << "[Dog Default constructor " << this->type << "]" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(std::string name) : Animal(name)
{
	this->type = name;
	std::cout << "[Dog Parameterized constructor " << this->type << "]" << std::endl;
	this->brain = new Brain;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "[Dog Default destructor " << this->type << "]" << std::endl;
}

Dog::Dog(Dog const &C) : Animal(C.type)
{
	this->brain = C.brain;
	this->type = C.type;
	std::cout << "[Dog Copy constructor " << this->type << "]" << std::endl;
}

Dog &Dog::operator =(Dog const &C)
{
	if (this != &C)
	{
		if (this->brain)
			delete this->brain;
		this->brain = C.brain;
		this->type = C.type;
	}
	std::cout << "[Dog copy called " << this->type << "]" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": GRRRRRRRRRR" << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}