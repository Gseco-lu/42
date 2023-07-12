#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *x = new Dog;
	Cat y("y");
	Dog z("z");

	z->getType();
	z->makeSound();
	
	y.getType();
	y.makeSound();

	z.getType();
	z.makeSound();

	delete rafeiro;
}