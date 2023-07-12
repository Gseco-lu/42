/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:46:35 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:46:35 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("Unknown animal")
{
	std::cout << "[animal Default Constructor " << this->type << "]" << std::endl;	
}

AAnimal::AAnimal(std::string name) : type(name)
{
	std::cout << "[animal Parameterized Constructor " << this->type << "]" << std::endl;	
}

AAnimal::AAnimal(AAnimal const &A)
{
	this->type = A.type;
	std::cout << "[animal Copy Constructor " << this->type << "]" << std::endl;	
}

AAnimal::~AAnimal()
{
	std::cout << "[animal Destructor " << this->type << "]" << std::endl;	
}

AAnimal &AAnimal::operator=(AAnimal const &A)
{
	this->type = A.type;
	std::cout << "[animal AO " << this->type << "]" << std::endl;	
	return *this;
}
