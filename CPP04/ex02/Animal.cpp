#include "Animal.hpp"

Animal::Animal(void) : type("Unknown animal")
{
	std::cout << "[animal Default Constructor " << this->type << "]" << std::endl;	
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "[animal Parameterized Constructor " << this->type << "]" << std::endl;	
}

Animal::Animal(animal const &A)
{
	this->type = A.type;
	std::cout << "[animal Copy Constructor " << this->type << "]" << std::endl;	
}

Animal::~Animal()
{
	std::cout << "[animal Destructor " << this->type << "]" << std::endl;	
}

Animal &Animal::operator=(Animal const &A)
{
	this->type = A.type;
	std::cout << "[animal AO " << this->type << "]" << std::endl;	
	return *this;
}
