/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:01:10 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/23 17:32:38 by gseco-lu         ###   ########.fr       */
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
# include <ctype.h>


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
		
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter & operator=(const ScalarConverter &assign);
		static void convert(std::string literal);

};

#endif