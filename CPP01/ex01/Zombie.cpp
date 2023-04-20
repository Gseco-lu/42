#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	Zombie::_name = name;
	std::cout << "[" << Zombie::_name << " created with parameter]" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "[" << Zombie::_name << " deleted]" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
