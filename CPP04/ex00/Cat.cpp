#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->type = "Unknown";
	std::cout << "[Cat Default constructor " << this->type << "]" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	this->type = name;
	std::cout << "[Cat Parameterized constructor " << this->type << "]" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "[Cat Default destructor " << this->type << "]" << std::endl;
}

Cat::Cat(Cat const &C) : Animal(type)
{
	this->type = C.type;
	std::cout << "[Cat Copy Constructor " << this->type << "]" << std::endl;
}

Cat &Cat::operator =(Cat const &C)
{
	this->type = C.type;
	std::cout << "[Cat AO called " << this->type << "]" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << this->type << ": Meow Meow Mudifuka" << std::endl;
}

std::string Cat::getType() const
{
	return this->type;
}