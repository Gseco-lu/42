/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:46:15 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:46:15 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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