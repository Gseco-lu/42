/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:46:18 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 09:46:18 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()
{
	std::cout << "[Default Constructor called of Brain]" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	for (int i =0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	std::cout << "[Copy Constructor called of Brain]" << std::endl;
}


Brain::~Brain()
{
	std::cout << "[Destructor called of Brain]" << std::endl;
}


Brain & Brain::operator=(const Brain &assign)
{
	for (int i =0; i < 100; i++)
		this->ideas[i] = assign.ideas[i];
	return *this;
}