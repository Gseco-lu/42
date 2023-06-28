/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:46 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:46 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "\033[33m" << "FragTrap constructor was called" << "\033[37m" << std::endl;
	this->name = "NULL";
	this->health = 100;
	this->healthMax = 100;
	this->energy = 100;
	this->attack_p = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "\033[33m" << "FragTrap " << name << " was created" << "\033[37m" << std::endl;
	this->name = name;
	this->health = 100;
	this->healthMax = 100;
	this->energy = 100;
	this->attack_p = 30;
}

FragTrap::FragTrap(const FragTrap &s)
{
	std::cout << "\033[33m" << "FragTrap is now a copy of " << s.name << "\033[37m" << std::endl;
	*this = s;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[33m" << "("<< this->name << ") FragTrap destructor was called" << "\033[37m" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	
	if (health <= 0)
			std::cout << "\033[33m" << "FragTrap ("<< getName() << ") is dead" << "\033[37m" << std::endl;
	else if (energy > 0)
	{
		std::cout << "\033[33m" << "FragTrap: ( " << name;
		std::cout << " ) attacks: " << target;
		std::cout << " points of damage: " << attack_p << "\033[37m" << std::endl;
		energy--;
	}
	else
		std::cout << "\033[33m" << "FragTrap ( "<< getName() << " ) " << "no energy!" << "\033[37m" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (health <= 0)
		std::cout << "\033[32m" << "FragTrap ("<< getName() << ") " << "is dead" << "\033[37m" << std::endl;
	else if (energy <= 0)
		std::cout << "\033[32m" << "FragTrap ("<< getName() << ") " << "doesn't have energy" << "\033[37m" << std::endl;
	else
		std::cout << "\033[33m" << "FragTrap ( " << getName() << " ) High Fives Guys!" << "\033[37m" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &s)
{
	this->name = s.name;
	this->health = s.health;
	this->healthMax = s.healthMax;
	this->energy = s.energy;
	this->attack_p = s.attack_p;
	return *this;
}
