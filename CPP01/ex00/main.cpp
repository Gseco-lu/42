#include "Zombie.hpp"
#include <iostream>

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main (void)
{
	Zombie *nozob = newZombie("Nozob");
	nozob->announce();
	randomChump("Nozobese");
	delete nozob;
}
