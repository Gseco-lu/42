/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:09:19 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/18 16:58:46 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>

typedef struct Data
{
	std::string s1;
	int n;
} Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &copy);
	
	public:
		~Serializer();
		Serializer & operator=(const Serializer &assign);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif