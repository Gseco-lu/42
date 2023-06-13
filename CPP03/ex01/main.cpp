#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a1("A1");
	ScavTrap a2("A2");

	a1.setAttackPoint(5);
	a1.attack(a2.getName());
	a1.takeDamage(5);
}