#ifndef WRONGCAT_HPP_
# define WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(WrongCat const &C);
	~WrongCat();
	WrongCat &operator =(WrongCat const &C);

	void makeSound() const;
	std::string getType() const;
};



#endif