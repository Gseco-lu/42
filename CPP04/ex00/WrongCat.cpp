#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->type = "NULL";
	std::cout << "[WrongCat Default constructor " << this->type << "]" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	this->type = name;
	std::cout << "[WrongCat Parameterized constructor " << this->type << "]" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[WrongCat Default destructor " << this->type << "]" << std::endl;
}

WrongCat::WrongCat(WrongCat const &C) : WrongAnimal(type)
{
	this->type = C.type;
	std::cout << "[WrongCat Copy Constructor " << this->type << "]" << std::endl;
}

WrongCat &WrongCat::operator =(WrongCat const &C)
{
	this->type = C.type;
	std::cout << "[WrongCat called " << this->type << "]" << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WRONG MEOW MEOW" << std::endl;
}

std::string WrongCat::getType() const
{
	return this->type;
}