/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:38:20 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/02/06 15:51:44 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange & operator=(const BitcoinExchange &assign);
		static void exchange(std::string);
		
	private:
		static std::map<std::string, float> _db;
		static std::string _date;
		static float _value;
		static float _valueExchanged;
		
		static void extract_db();
		static void input_handler(std::string);
		static void conversion();
		static int err_out(std::string err);
		static std::string isValidLine(std::string line);
		
		
};

#endif