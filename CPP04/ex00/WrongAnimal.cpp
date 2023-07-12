#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Unknown WrongAnimal")
{
	std::cout << "[WrongAnimal Default Constructor " << this->type << "]" << std::endl;	
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "[WrongAnimal Parameterized Constructor " << this->type << "]" << std::endl;	
}

WrongAnimal::WrongAnimal(WrongAnimal const &A)
{
	this->type = A.type;
	std::cout << "[WrongAnimal Copy Constructor " << this->type << "]" << std::endl;	
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal Destructor " << this->type << "]" << std::endl;	
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &A)
{
	this->type = A.type;
	std::cout << "[WrongAnimal AO " << this->type << "]" << std::endl;	
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "REEEEEEEEEEEEEEEEE" << std::endl;	
}

std::string WrongAnimal::getType() const
{
	return this->type;
}