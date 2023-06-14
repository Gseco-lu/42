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
	ScavTrap a1("A1");
	ScavTrap a2("A2");

	a1.setAttackPoint(5);
	a1.attack(a2.getName());
	a1.takeDamage(5);
}