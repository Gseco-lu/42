/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:20:50 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:20:50 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a1("A1");
	ClapTrap a2("A2");

	a1.setAttackPoint(5);
	a1.attack(a2.getName());
	a1.takeDamage(5);
}