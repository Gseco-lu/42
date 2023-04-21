/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:59:33 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/21 14:59:33 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon pistol = Weapon("Glock");
		HumanA mike("Mike", pistol);
		mike.attack();
		pistol.setType("Deset Eagle");
		mike.attack();
	}
	{
		Weapon pistol = Weapon("Desert Eagle");
		HumanB jose("Jose");
		jose.setWeapon(pistol);
		jose.attack();
		pistol.setType("Glock");
		jose.attack();
	}
	return 0;
}