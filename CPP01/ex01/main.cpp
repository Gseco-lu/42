/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:59:06 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/21 14:59:06 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	Zombie *horde = zombieHorde(3, "zombieX");
	if (horde != NULL)
	{
		for(int i = 0; i < 3; i++)
			horde[i].announce();
		delete[] horde;
	}	
}