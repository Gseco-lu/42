#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string name);
	Dog(Dog const &C);
	~Dog();
	Dog &operator =(Dog const &C);
	
	virtual void makeSound() const;
	virtual std::string getType() const;
};



#endif