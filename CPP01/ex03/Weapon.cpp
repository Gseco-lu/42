/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:59:39 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/21 14:59:39 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string weapon)
{
	Weapon::setType(weapon);
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	if (type == "Glock" || type == "Desert Eagle")
		this->type = type;
}

const std::string& Weapon::getType()
{
	return this->type;
}
