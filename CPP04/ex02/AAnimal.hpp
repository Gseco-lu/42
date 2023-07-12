/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:46:37 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:46:37 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP_
# define AAnimal_HPP_

# include <iostream>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(std::string name);
	AAnimal(AAnimal const &A);
	virtual ~AAnimal();
	AAnimal &operator=(AAnimal const &A);

	virtual void	makeSound() const = 0;
	virtual std::string getType() const = 0;
};



#endif