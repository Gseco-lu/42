/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:42 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:42 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :  ScavTrap(), FragTrap(), name("NULL")
{
    std::cout << "\033[34m" << "DiamondTrap constructor" << "\033[37m" << std::endl;;
}

DiamondTrap::DiamondTrap(DiamondTrap const &S) :  ClapTrap(name + "_clapname"), ScavTrap(S.name), FragTrap(name), name(S.name)
{
    this->FragTrap::hitPoints = (S.FragTrap::getHP());
	this->ScavTrap::energyPoints = (S.ScavTrap::getEP());
	this->FragTrap::attackDamage = (S.FragTrap::getAD());
	this->maxHealth = this->FragTrap::hitPoints;
    std::cout << "\033[34m" << "DiamondTrap is now a copy of " << S.name << "\033[37m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string namee) :   ClapTrap(namee + "_clapname"), ScavTrap(namee), FragTrap(namee), name(namee)
{   
    this->energyPoints = 50;
	this->maxHealth = 100;
    std::cout << "\033[34m" << "DiamondTrap " << name << " was created" << "\033[37m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[34m" << name << " DiamondTrap" << " destructor was called" << "\033[37m" << std::endl;
}

void DiamondTrap::operator=(const DiamondTrap &S)
{
	this->FragTrap::hitPoints = (S.FragTrap::getHP());
	this->ScavTrap::energyPoints = (S.ScavTrap::getEP());
	this->FragTrap::attackDamage = (S.FragTrap::getAD());
	this->maxHealth = this->FragTrap::hitPoints;
}

void DiamondTrap::whoAmI(void)
{
	if (!checkStats())
		return ;
	std::cout << "\033[34m" << "DiamondTrap (" << name;
	std::cout << "\033[34m" << ") ClapTrap (" << this->ClapTrap::getName() << ")" << "\033[37m" << std::endl;
}