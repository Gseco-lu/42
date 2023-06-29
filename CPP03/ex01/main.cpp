/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:20:58 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:20:58 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Ben("Ben");
	ScavTrap Joe("Joe");
	Joe.attack("Ben");
	Ben.takeDamage(1);
	Ben.attack("Joe");
	Joe.takeDamage(0);
	Ben.beRepaired(10);
	Joe.beRepaired(134);
	Joe.guardGate();
}