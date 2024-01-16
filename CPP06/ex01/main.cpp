/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:08:46 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/12 14:09:00 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main ()
{
	Data *data = new Data;
	data->n = 423;
	data->s1 = "Badgelgeh";
	
	uintptr_t raw = Serializer::serialize(data);
	
	std::cout << data << std::endl;
	
	std::cout << raw << std::endl;
	
	std::cout << Serializer::deserialize(raw) << std::endl;
	
	std::cout << data->n << " " << data->s1 << std::endl;
	
	delete data;
}