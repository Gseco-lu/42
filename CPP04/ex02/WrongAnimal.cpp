/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:37:17 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 10:40:49 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Unknown WrongAnimal")
{
	std::cout << "[WrongAnimal Default Constructor " << this->type << "]" << std::endl;	
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "[WrongAnimal Parameterized Constructor " << this->type << "]" << std::endl;	
}

WrongAnimal::WrongAnimal(WrongAnimal const &A)
{
	this->type = A.type;
	std::cout << "[WrongAnimal Copy Constructor " << this->type << "]" << std::endl;	
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal Destructor " << this->type << "]" << std::endl;	
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &A)
{
	this->type = A.type;
	std::cout << "[WrongAnimal copy called " << this->type << "]" << std::endl;	
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "RRRRRRRRRRRRR" << std::endl;	
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
