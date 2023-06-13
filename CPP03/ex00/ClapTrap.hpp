#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

	protected:
		std::string name;
		int health;
		int healthMax;
		int energy;
		int attack_p;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		~ClapTrap();
		std::string getName();
		void setAttackPoint(int attack_p);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap &operator=(const ClapTrap &claptrap);

};


#endif