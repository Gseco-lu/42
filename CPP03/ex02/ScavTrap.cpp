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

ScavTrap::ScavTrap() : ClapTrap(), name("NULL")
{
	std::cout << "\033[32m" << "ScavTrap constructor was called" << "\033[37m" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	this->maxHealth = 100;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), name(name)
{
	std::cout << "\033[32m" << "ScavTrap " << name << " was created" << "\033[37m" << std::endl;
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	this->maxHealth = 100;
}

ScavTrap::ScavTrap(ScavTrap const &S) : ClapTrap(S.name), name(S.name)
{
	std::cout << "\033[32m" << "ScavTrap is now a copy of " << S.name << "\033[37m" << std::endl;
	this->setHP(S.getHP());
	this->setEP(S.getEP());
	this->setAD(S.getAD());
	this->maxHealth = S.getHP();
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
	this->setEP(getEP() - 1);
	std::cout << "\033[32m" << "ScavTrap: " << name;
	std::cout << " attacks: " << target;
	std::cout << " points of damage: " << getAD() << "\033[37m" << std::endl;
}

void ScavTrap::operator=(const ScavTrap &S)
{
	this->setHP(S.getHP());
	this->setEP(S.getEP());
	this->setAD(S.getAD());
	this->maxHealth = S.getHP();
}
