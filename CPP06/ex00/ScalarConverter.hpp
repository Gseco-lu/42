/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:01:10 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/18 16:57:37 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <exception>
# include <iomanip> 
# include <sstream>
# include <limits>
# include <stdlib.h>

class ScalarConverter
{
	private:
		
		static std::string getType(std::string literal);
		static void converter(char literal);
		static void converter(int literal);
		static void converter(float literal);
		static void converter(double literal);
		static void convertToType(std::string type, std::string literal);
		static void impossible(void);
		ScalarConverter();
		
	public:
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter & operator=(const ScalarConverter &assign);
		static void convert(std::string literal);

};

#endif