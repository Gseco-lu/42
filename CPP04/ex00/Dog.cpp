#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->type = "Unknown";
	std::cout << "[Dog Default constructor " << this->type << "]" << std::endl;
}

Dog::Dog(std::string name) : Animal(name)
{
	this->type = name;
	std::cout << "[Dog Parameterized constructor " << this->type << "]" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "[Dog Default destructor " << this->type << "]" << std::endl;
}

Dog::Dog(Dog const &C) : Animal(type)
{
	this->type = C.type;
	std::cout << "[Dog Copy constructor " << this->type << "]" << std::endl;
}

Dog &Dog::operator =(Dog const &C)
{
	this->type = C.type;
	std::cout << "[Dog AO " << this->type << "]" << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << this->type << ": Bark Bark Bish" << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}