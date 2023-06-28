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

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap b1("B1");
	ScavTrap b2("B2");
	ClapTrap a1("A1");
	ClapTrap a2("A2");

	b1.setAttackPoint(5);
	b1.attack(a2.getName());
	b1.takeDamage(5);
	b1.setAttackPoint(5);
	b1.attack(a2.getName());
	b1.takeDamage(5);
}