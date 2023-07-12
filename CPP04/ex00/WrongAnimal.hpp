#ifndef WRONGANIMAL_HPP_
# define WRONGANIMAL_HPP_

# include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &A);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &A);

	void	makeSound() const;
	std::string getType() const;
};



#endif