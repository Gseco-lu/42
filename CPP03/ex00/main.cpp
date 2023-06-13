#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a1("A1");
	ClapTrap a2("A2");

	a1.setAttackPoint(5);
	a1.attack(a2.getName());
	a1.takeDamage(5);
}