/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:20:46 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:20:46 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("NULL"), hitPoints(10), energyPoints(10), attackDamage(0), maxHealth(10)
{
	std::cout << "\033[31m" << "ClapTrap constructor was called" << "\033[37m" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0), maxHealth(10)
{
	std::cout << "\033[31m" << "ClapTrap " << name << " was created"  << "\033[37m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &C) : name(C.name), hitPoints(C.hitPoints), energyPoints(C.energyPoints), attackDamage(C.attackDamage), maxHealth(C.hitPoints)
{
	std::cout << "\033[31m" << "ClapTrap copy " << name << " was created"  << "\033[37m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[31m" << "("<< name << ") ClapTrap destructor was called" << "\033[37m" << std::endl;
}

void ClapTrap::operator=(const ClapTrap &c)
{
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage = c.attackDamage;
	this->maxHealth = c.hitPoints;
	std::cout << "\033[31m" << "ClapTrap copy " << name << " was created"  << "\033[37m" << std::endl;
}

bool ClapTrap::checkStats()
{
	if (!this->energyPoints)
	{
		std::cout << "\033[31m" << this->name << " has no energy" << "\033[37m" << std::endl;
		return false;
	}
	if (!this->hitPoints)
	{
		std::cout << "\033[31m" << this->name << " is dead" << "\033[37m" << std::endl;
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string& target)
{
	if (!checkStats())
		return ;
	this->energyPoints--;
	std::cout << "\033[31m" << "ClapTrap: " << name;
	std::cout << " attacks: " << target;
	std::cout << " points of damage: " << attackDamage << "\033[37m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!hitPoints)
		return ;
	this->hitPoints -= amount;
	if (hitPoints < 0) 
		hitPoints = 0;
	std::cout << "\033[31m" << this->name << " took " << amount << " damage. Total HP: " << this->hitPoints << "\033[37m" << std::endl;	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!checkStats())
		return ;
	if (this->hitPoints + amount > (unsigned int)this->maxHealth)
	{
		this->hitPoints = this->maxHealth;
		this->energyPoints--;
		std::cout << "\033[31m" << this->name << " repaired himself for " << amount << " Total HP: " << this->hitPoints << "\033[37m" << std::endl;	
		return ;
	}
	this->energyPoints--;
	this->hitPoints += amount;
	std::cout << "\033[31m" << this->name << " repaired himself for " << amount << " Total HP: " << this->hitPoints << "\033[37m" << std::endl;	
}
