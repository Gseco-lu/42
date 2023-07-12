/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:20:37 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 11:21:10 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("materia")
{
	std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "\e[0;33mParameter Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}

AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign; 
	return *this;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* " << this->_type << " does something abstract to " \
	<< target.getName() << " *" << std::endl;
}

std::string const & AMateria::getType() const 
{	
    return this->_type; 
}
