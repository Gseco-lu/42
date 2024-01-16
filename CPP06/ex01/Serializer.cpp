/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:09:46 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/12 14:10:09 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "\e[0;33mDefault Constructor called of Serializer\e[0m" << std::endl;
}

Serializer::Serializer(const Serializer &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Serializer\e[0m" << std::endl;
}

Serializer::~Serializer()
{
	std::cout << "\e[0;31mDestructor called of Serializer\e[0m" << std::endl;
}

Serializer & Serializer::operator=(const Serializer &assign)
{
	(void) assign;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}