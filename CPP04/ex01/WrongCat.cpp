/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:01:56 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/13 14:56:27 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "Unknown";
	std::cout << "[WrongCat Default constructor " << this->type << "]" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	this->type = name;
	std::cout << "[WrongCat Parameterized constructor " << this->type << "]" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[WrongCat Default destructor " << this->type << "]" << std::endl;
}

WrongCat::WrongCat(WrongCat const &C) : WrongAnimal(C.type)
{
	this->type = C.type;
	std::cout << "[WrongCat Copy Constructor " << this->type << "]" << std::endl;
}

WrongCat &WrongCat::operator =(WrongCat const &C)
{
	this->type = C.type;
	std::cout << "[WrongCat called " << this->type << "]" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Miau" << std::endl;
}

std::string WrongCat::getType() const
{
	return this->type;
}
