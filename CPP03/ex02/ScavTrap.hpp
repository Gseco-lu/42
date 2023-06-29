/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:18 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:18 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string name;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &S);
	~ScavTrap();
	void operator=(const ScavTrap &c);
	void attack(const std::string& target);
	void guardGate();

};



#endif