/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:22:09 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/13 16:19:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : ICharacter()
{
	std::cout << "Default Constructor called of Character " << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string name) : ICharacter(), _name(name)
{
	std::cout << "Parameterized Constructor called of Character " << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &C) : ICharacter(C)
{
	std::cout << "Copy Constructor called of Character" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		inventory[i] = NULL;	
		if (C.inventory[i])
			C.inventory[i]->getType() == "ice" ? inventory[i] = new Ice() : inventory[i] = new Cure();
	}
			
}

Character::~Character()
{
	std::cout << "Destructor called of Character " << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
	std::list<AMateria*>::iterator it;
	for (it = dontuse.begin(); it != dontuse.end(); ++it)
		delete *it;
}

Character & Character::operator=(const Character &assign)
{
	std::cout << "copy called of Character" << std::endl;
	(void)assign;
	return *this;
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (inventory[0] != NULL && inventory[1] != NULL && inventory[2] != NULL && inventory[3] != NULL)
		this->dontuse.push_front(m);
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int index)
{
	if (index < 0 || index > 3 )
	{
		std::cerr << "Error: Slot out of range" << std::endl;
		return ;
	} 	
	if ( inventory[index] == 0)
	{
		std::cerr << "Error: Slot is empty" << std::endl;
		return ;
	}
	this->dontuse.push_front(inventory[index]);
	inventory[index] = NULL;
}

void Character::use(int index, ICharacter& target)
{
	if (index < 0 || index > 3 )
	{
		std::cerr << "Error: Slot out of range" << std::endl;
		return ;
	} 	
	if ( inventory[index] == 0)
	{
		std::cerr << "Error: Slot is empty" << std::endl;
		return ;
	}
	inventory[index]->use(target);
}

std::string const & Character::getName() const 
{
    return this->_name;
}
