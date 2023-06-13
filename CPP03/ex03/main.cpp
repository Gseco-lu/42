#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "==============================================\n";
	std::cout << std::endl;
	ClapTrap *test1 = new DiamondTrap("test1");
		delete test1;
	std::cout << std::endl;
	std::cout << "==============================================\n";
	ClapTrap clap("A1");
	ScavTrap momma("A2");
	DiamondTrap baby("A3");
	DiamondTrap jeff;
	std::cout << std::endl;
	jeff.takeDamage(0);
	jeff.attack("Old Guy");
	baby.highFivesGuys();
	baby.guardGate();
	baby.whoAmI();
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby.takeDamage(30);
	jeff.attack("Baby");
	baby.takeDamage(30);
	baby = jeff;
	baby.whoAmI();
	baby.beRepaired(100);
	std::cout << "==============================================\n";
}