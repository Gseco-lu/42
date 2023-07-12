/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:29:40 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 11:29:49 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "\e[0;33mDefault Constructor called of Ice\e[0m" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Ice\e[0m" << std::endl;
	this->_type = "ice";
	(void)copy;
}

Ice::~Ice()
{
	std::cout << "\e[0;31mDestructor called of Ice\e[0m" << std::endl;
}

Ice & Ice::operator=(const Ice &assign)
{
	(void) assign;
	return *this;
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}