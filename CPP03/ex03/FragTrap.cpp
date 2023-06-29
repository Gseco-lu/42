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

FragTrap::FragTrap() : ClapTrap(), name("NULL")
{
	std::cout << "\033[33m" << "FragTrap constructor was called" << "\033[37m" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), name(name)
{	
	std::cout << "\033[33m" << "FragTrap " << name << " was created" << "\033[37m" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &S) : name(S.name)
{
	std::cout << "\033[33m" << "FragTrap is now a copy of " << S.name << "\033[37m" << std::endl;
	this->hitPoints = (S.getHP());
	this->energyPoints = (S.getEP());
	this->attackDamage = (S.getAD());
}

FragTrap::~FragTrap()
{
	std::cout << "\033[33m" << "("<< this->name << ") FragTrap destructor was called" << "\033[37m" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (!checkStats())
		return ;
	std::cout << "\033[33m" << "FragTrap ( " << this->name << " ) High Fives Guys!" << "\033[37m" << std::endl;
}

void FragTrap::operator=(const FragTrap &S)
{
	this->hitPoints = (S.getHP());
	this->energyPoints = (S.getEP());
	this->attackDamage = (S.getAD());
}
