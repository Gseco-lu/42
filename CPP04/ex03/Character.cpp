/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:22:09 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 11:23:00 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : ICharacter()
{
	std::cout << "\e[0;33mDefault Constructor called of Character \e[0m" << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : ICharacter(), _name(name)
{
	std::cout << "\e[0;33mParameterized Constructor called of Character \e[0m" << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy) : ICharacter(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;	
		if (copy._inventory[i])
			copy._inventory[i]->getType() == "ice" ? _inventory[i] = new Ice() : _inventory[i] = new Cure();
	}
			
}

Character::~Character()
{
	std::cout << "\e[0;31mDestructor called of Character \e[0m" << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	std::list<AMateria*>::iterator it;
	for (it = floor.begin(); it != floor.end(); ++it)
		delete *it;
}

Character & Character::operator=(const Character &assign)
{
	std::cout << "\e[0;31mAO called of Character\e[0m" << std::endl;
	(void)assign;
	return *this;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (_inventory[3] != NULL)
		this->floor.push_front(m);
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx < 0 || idx > 3 ) && std::cerr << "Error: Slot out of range" << std::endl)
		return ;
	if ( _inventory[idx] == 0 && std::cerr << "Error: Slot is empty" << std::endl)
		return ;
	this->floor.push_front(_inventory[idx]);
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx > 3 ) && std::cerr << "Error: Slot out of range" << std::endl)
		return ;
	if ( _inventory[idx] == 0 && std::cerr << "Error: Slot is empty" << std::endl)
		return ;
	_inventory[idx]->use(target);
}

std::string const & Character::getName() const 
{
    return this->_name;
}
