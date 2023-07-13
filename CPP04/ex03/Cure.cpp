/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:24:25 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/13 16:04:14 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	std::cout << "Default Constructor called of Cure" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	(void) copy;
	this->_type = "cure";
	std::cout << "Copy Constructor called of Cure" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Destructor called of Cure" << std::endl;
}

Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	return *this;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
