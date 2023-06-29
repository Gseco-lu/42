/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:40 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:40 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
private:
	std::string name;

protected:
	ClapTrap();

	int hitPoints;
	int energyPoints;
	int	attackDamage;
	std::string getName() const;

	bool checkStats() const;

public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &C);
	~ClapTrap();
	void operator=(const ClapTrap &c);
	
	int getHP() const;
	int getEP() const;
	int getAD() const;
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif