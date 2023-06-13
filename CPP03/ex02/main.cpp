#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap clap("A1");
	ScavTrap momma("A2");
	FragTrap baby("A3");

	baby.attack("A1");
	clap.takeDamage(30);
	clap.attack("A2");
	momma.attack("A2");
	baby.takeDamage(20);
	baby.highFivesGuys();
	momma.attack("A1");
	baby.takeDamage(20);
	momma.guardGate();
	momma.attack("A3");
	baby.takeDamage(20);
	momma.attack("A3");
	baby.takeDamage(20);
	momma.attack("A3");
	baby.takeDamage(20);
	momma.attack("A3");
	baby.takeDamage(20);

	ClapTrap *test1 = new ScavTrap("Test 1");
	ClapTrap *test2 = new FragTrap("Test 2");
	ClapTrap *test3 = new ClapTrap("Test 3");
	test1->attack("test2");
	test2->attack("test3");
	test3->attack("test1");
	delete test3;
	delete test2;
	delete test1;
}