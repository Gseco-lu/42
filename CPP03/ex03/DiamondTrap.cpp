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

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
    this->name = "NULL";
    ClapTrap::name =  (this->name + "_clap_name");
    std::cout << "\033[34m" << "DiamondTrap constructor" << "\033[37m" << std::endl;;
}

DiamondTrap::DiamondTrap(const DiamondTrap &s) : ClapTrap(s.name + "_clap_name"), ScavTrap(s.name), FragTrap(s.name)
{
    this->health = s.FragTrap::health;
    this->healthMax = s.FragTrap::healthMax;
    this->energy = s.ScavTrap::energy;
    this->attack_p = s.FragTrap::attack_p;
    this->name = s.name;
    //FragTrap::name =  (name);
    //ScavTrap::name =  (name);
    //ClapTrap::name =  (this->name + "_clap_name");
    std::cout << "\033[34m" << "DiamondTrap is now a copy of " << s.name << "\033[37m" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->health = FragTrap::health;
    this->healthMax = FragTrap::healthMax;
    this->energy = ScavTrap::energy;
    this->attack_p = FragTrap::attack_p;
    this->name = name;
    //FragTrap::name =  (name);
    //ScavTrap::name =  (name);
    //ClapTrap::name =  (this->name + "_clap_name");
    std::cout << "\033[34m" << "DiamondTrap " << name << " was created" << "\033[37m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "\033[34m" << name << " DiamondTrap" << " destructor was called" << "\033[37m" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &s)
{
    this->name = s.name;
    this->ClapTrap::name  = s.ClapTrap::name;
	this->health = s.health;
	this->energy = s.energy;
	this->attack_p = s.attack_p;
    return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "\033[34m" << "DiamondTrap (" << name;
	std::cout << "\033[34m" << ") ClapTrap (" << ClapTrap::name << ")" << "\033[37m" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}