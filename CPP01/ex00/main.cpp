/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:58:53 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/21 14:58:53 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main (void)
{
	Zombie *nozob = newZombie("Nozob");
	nozob->announce();
	randomChump("Nozobese");
	delete nozob;
}
