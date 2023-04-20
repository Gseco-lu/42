#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon pistol = Weapon("Glock");
		HumanA mike("Mike", pistol);
		mike.attack();
		pistol.setType("Deset Eagle");
		mike.attack();
	}
	{
		Weapon pistol = Weapon("Desert Eagle");
		HumanB jose("Jose");
		jose.setWeapon(pistol);
		jose.attack();
		pistol.setType("Glock");
		jose.attack();
	}
	return 0;
}