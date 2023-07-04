/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:51 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:51 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap Ben("Ben");
	ScavTrap Joe("Joe");
	FragTrap Sag("Sag");
	DiamondTrap Wilse("Wilse");
	
	std::cout << std::endl;
	Ben.takeDamage(1);
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.beRepaired(10);
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.attack("Joe");
	Ben.beRepaired(10);
	Ben.takeDamage(17);
	Ben.beRepaired(10);
	std::cout << std::endl;
	
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.attack("Ben");
	Joe.takeDamage(0);
	Joe.beRepaired(134);
	Joe.guardGate();
	Joe.takeDamage(9000);
	Joe.guardGate();
	std::cout << std::endl;

	Sag.attack("Ben");
	Sag.beRepaired(18);
	Sag.highFivesGuys();
	Sag.takeDamage(250);
	Sag.highFivesGuys();
	std::cout << std::endl;
	
	Wilse.attack("Joe");
	Wilse.takeDamage(1);
	Wilse.whoAmI();
	Wilse.beRepaired(5);
	Wilse.takeDamage(13);
	Wilse.beRepaired(1);
	Wilse.whoAmI();
	Wilse.guardGate();
	std::cout << std::endl;
}