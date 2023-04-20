#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

Weapon::Weapon(std::string weapon)
{
	Weapon::setType(weapon);
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	if (type == "Glock" || type == "Desert Eagle")
		this->type = type;
}

const std::string& Weapon::getType()
{
	return this->type;
}
