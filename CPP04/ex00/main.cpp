#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* a = new Animal();
	const Animal* b = new Dog("x");
	const Animal* c = new Cat();
	const Animal* d = new Animal("y");
	const WrongAnimal* f = new WrongCat();
	
	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	std::cout << d->getType() << " " << std::endl;
	std::cout << f->getType() << " " << std::endl;

	a->makeSound(); 
	b->makeSound(); 
	c->makeSound();
	d->makeSound();
	f->makeSound();
	
	delete a;
	delete b;
	delete c;
	delete d;
	delete f;
	return 0;
}