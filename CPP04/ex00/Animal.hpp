#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_

# include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(std::string name);
	Animal(Animal const &A);
	virtual ~Animal();
	Animal &operator=(Animal const &A);

	virtual void	makeSound() const;
	virtual std::string getType() const;
};



#endif