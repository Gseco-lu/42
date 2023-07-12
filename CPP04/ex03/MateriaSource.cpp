/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:30:41 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 11:30:51 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		_storage[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy) : IMateriaSource(copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of MateriaSource\e[0m" << std::endl;
}


MateriaSource::~MateriaSource()
{
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
		if (_storage[i])
			delete _storage[i];
}

MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	(void) assign;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	static int i;

	if (i == 4)
		return;
	_storage[i++] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
	AMateria *mat = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (_storage[i] && _storage[i]->getType() == type)
		{
			_storage[i]->getType() == "ice" ? mat = new Ice() : mat = new Cure();
			break ;	
		}
			
	}
	return mat;
}