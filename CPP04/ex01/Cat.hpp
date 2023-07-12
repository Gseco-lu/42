#ifndef CAT_HPP_
# define CAT_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	 
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