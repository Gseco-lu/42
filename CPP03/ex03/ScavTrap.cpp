/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:53 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:53 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "\033[32m" << "ScavTrap constructor was called" << "\033[37m" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->maxHealth = 100;
}

ScavTrap::ScavTrap(std::string namee) :  ClapTrap(namee), name(namee)
{
	std::cout << "\033[32m" << "ScavTrap " << name << " was created" << "\033[37m" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->maxHealth = 100;
}

ScavTrap::ScavTrap(ScavTrap const &S) : ClapTrap(S.name), name(S.name)
{
	std::cout << "\033[32m" << "ScavTrap is now a copy of " << this->name << "\033[37m" << std::endl;
	this->hitPoints = (S.getHP());
	this->energyPoints = (S.getEP());
	this->attackDamage = (S.getAD());
	this->maxHealth = (S.getHP());
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[32m" << "("<< this->name << ") ScavTrap destructor was called" << "\033[37m" << std::endl;
}

void ScavTrap::guardGate()
{
	if (!checkStats())
		return ;
	std::cout << "\033[32m" << "ScavTrap " << name << " is now in Gatekeeper mode" << "\033[37m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!checkStats())
		return ;
	this->energyPoints = getEP() - 1;
	std::cout << "\033[32m" << "ScavTrap: " << name;
	std::cout << " attacks: " << target;
	std::cout << " points of damage: " << attackDamage << "\033[37m" << std::endl;
}

void ScavTrap::operator=(const ScavTrap &S)
{
	this->hitPoints = (S.getHP());
	this->energyPoints = (S.getEP());
	this->attackDamage = (S.getAD());
	this->maxHealth = (S.getHP());
}
