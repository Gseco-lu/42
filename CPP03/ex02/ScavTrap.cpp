/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:16 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:16 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "\033[32m" << "ScavTrap constructor was called" << "\033[37m" << std::endl;
	this->name = "NULL";
	this->health = 100;
	this->healthMax = 100;
	this->energy = 50;
	this->attack_p = 20;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "\033[32m" << "ScavTrap " << name << " was created" << "\033[37m" << std::endl;
	this->name = name;
	this->health = 100;
	this->healthMax = 100;
	this->energy = 50;
	this->attack_p = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
	std::cout << "\033[32m" << "ScavTrap is now a copy of " << scavtrap.name << "\033[37m" << std::endl;
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[32m" << "("<< getName() << ") ScavTrap destructor was called" << "\033[37m" << std::endl;
}

void ScavTrap::guardGate()
{
	if (health <= 0)
		std::cout << "\033[32m" << "ScavTrap ("<< getName() << ") " << "is dead" << "\033[37m" << std::endl;
	else if (energy <= 0)
		std::cout << "\033[32m" << "ScavTrap ("<< getName() << ") " << "doesn't have energy" << "\033[37m" << std::endl;
	else
		std::cout << "\033[32m" << "ScavTrap " << name << " is now in Gatekeeper mode" << "\033[37m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	
	if (health <= 0)
			std::cout << "\033[32m" << "ScavTrap ("<< getName() << ") " << "is dead" << "\033[37m" << std::endl;
	else if (energy > 0)
	{
		std::cout << "\033[32m" << "ScavTrap: " << name;
		std::cout << " attacks: " << target;
		std::cout << " points of damage: " << attack_p << "\033[37m" << std::endl;
		energy--;
	}
	else
		std::cout << "\033[32m" << "("<< getName() << ") " << "no energy!" << "\037[37m" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
	this->name = scavtrap.name;
	this->health = scavtrap.health;
	this->healthMax = scavtrap.healthMax;
	this->energy = scavtrap.energy;
	this->attack_p = scavtrap.attack_p;
	return *this;
}
