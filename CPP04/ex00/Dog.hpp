/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:45:59 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:45:59 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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