#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;
	Zombie* zhorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zhorde[i] = Zombie(name);
		zhorde[i].announce();
	}

	return zhorde;
}
