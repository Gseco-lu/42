/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:59:11 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/21 14:59:11 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name )
{
	if (N <= 0)
		return (NULL);
	Zombie *zhorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zhorde[i].setName(name);
	return (zhorde);
}
