#ifndef CAT_HPP_
# define CAT_HPP_

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string name);
	Cat(Cat const &C);
	~Cat();
	Cat &operator =(Cat const &C);

	virtual void makeSound() const;
	virtual std::string getType() const;
};



#endif