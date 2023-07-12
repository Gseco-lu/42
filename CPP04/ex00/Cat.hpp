/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:45:55 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:45:55 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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