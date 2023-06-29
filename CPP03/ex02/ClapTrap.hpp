/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:07 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:07 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int	attackDamage;

protected:

	bool checkStats() const;
	int getHP() const;
	int getEP() const;
	int getAD() const;

	void setHP(int);
	void setEP(int);
	void setAD(int);

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &C);
	~ClapTrap();
	void operator=(const ClapTrap &c);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif