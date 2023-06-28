/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:20:54 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:20:54 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "\033[31m" << "ClapTrap constructor was called" << "\033[37m" << std::endl;
	this->name = "NULL";
	this->health = 10;
	this->energy = 10;
	this->attack_p = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "\033[31m" << "ClapTrap " << name << " was created"  << "\033[37m" << std::endl;
	this->name = name;
	this->health = 10;
	this->healthMax = 10;
	this->energy = 10;
	this->attack_p = 0;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[31m" << "("<< getName() << ") ClapTrap destructor was called" << "\033[37m" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->name = claptrap.name;
	this->health = claptrap.health;
	this->energy = claptrap.energy;
	this->attack_p = claptrap.attack_p;
	return *this;
}

std::string ClapTrap::getName()
{
	return (name);
}

void ClapTrap::setAttackPoint(int attack_p)
{
	this->attack_p = attack_p;
	
}

void ClapTrap::attack(const std::string& target)
{
	
	if (health <= 0)
			std::cout << "\033[31m" <<" ("<< getName() << ") is dead " << "\033[37m" << std::endl;
	else if (energy > 0)
	{
		std::cout << "\033[31m" << "ClapTrap: " << name;
		std::cout << " attacks: " << target;
		std::cout << " points of damage: " << attack_p  << "\033[37m" << std::endl;
		energy--;
	}
	else
		std::cout << "\033[31m" << "("<< getName() << ") " << "no energy!" << "\033[37m" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{

	if (amount > 0)
	{
		health = (health - amount);
		if (health < 0)
			health = 0;
		std::cout << "\033[31m" << "("<< getName() << ") " << "takeDamage: " << amount;
		std::cout << " health: " << this->health << "\033[37m" << std::endl;
	}
	if (health <= 0)
		std::cout << "\033[31m" <<"("<< getName() << ") is dead " << "\033[37m" << std::endl;
}
void		ClapTrap::beRepaired( unsigned int amount )
{
	this->health += amount;
	if (this->health > this->healthMax)
	{
		this->health = this->healthMax;
		std::cout << "\033[31m" << "You can't heal more than your max!" << "\033[37m" << std::endl;
	}
	std::cout << "\033[31m" << "("<< getName() << ") " << "health: " << health << "\033[37m" << std::endl;
}
