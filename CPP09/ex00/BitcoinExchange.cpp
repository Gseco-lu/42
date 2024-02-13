/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:38:07 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/02/06 15:50:22 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"
#include <fstream>
#include <climits>
#include <stdlib.h>
#include <errno.h>
#include <time.h>

float BitcoinExchange::_value = 0;
float BitcoinExchange::_valueExchanged = 0;
std::string BitcoinExchange::_date = "";
std::map<std::string, float> BitcoinExchange::_db;

BitcoinExchange::BitcoinExchange()
{
	std::cout << "\e[0;33mDefault Constructor called of BitcoinExchange\e[0m" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of BitcoinExchange\e[0m" << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << "\e[0;31mDestructor called of BitcoinExchange\e[0m" << std::endl;
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign)
{
	(void) assign;
	return *this;
}

void BitcoinExchange::exchange(std::string file)
{
	BitcoinExchange::extract_db();
	BitcoinExchange::input_handler(file);
}

void BitcoinExchange::extract_db()
{
	std::ifstream in("data.csv");
	if (!in.is_open())
		err_out("Error fetching data");
	std::string line;
	std::getline(in, line);
	while (!in.eof())
	{
		std::getline(in, line);
		for (unsigned int i = 0; i < line.size(); i++)
		{
			if (line[i] == ',')
			{
				std::string key = line.substr(0, i);
				float value = strtof(line.substr(i + 1, line.size() - i).c_str(), NULL);
				_db[key] = value;
				break;
			}
		}
	}
	in.close();
}

void BitcoinExchange::input_handler(std::string file)
{
	std::ifstream in(file.c_str());
	if (!in.is_open())
		err_out("Invalid filename");
	std::string line;
	std::string err = "";
	std::getline(in, line);
	while (!in.eof())
	{
		std::getline(in, line);
		err = isValidLine(line);
		if (!err.empty())
			std::cout << err << std::endl;
		else
		{
			conversion();
			std::cout << _date << " => " << _value << " = " << _valueExchanged << std::endl;
		}
	}
	in.close();
}

std::string BitcoinExchange::isValidLine(std::string line)
{
	if (line.empty())
		return "\n";
	time_t t = time(NULL);
    struct tm* tm = localtime(&t);
    if (!strptime(line.substr(0, 10).c_str(), "%Y-%m-%d", tm))
		return "Error: bad input => " + line.substr(0, 10);
	if (line[10] != ' ' && line[11] != '|' && line[12] != ' ')
		return "Error: bad input. Format => YYYY-MM-DD | BTC";
	float value = strtof(line.substr(13, line.size() - 13).c_str(), NULL);
	if (errno == ERANGE)
		return "Error: out of range";
	if (errno == EINVAL)
		return "Error: invalid conversion";
	if (value <= 0)
		return "Error: not a positive number";
	if (static_cast<long>(value) > INT_MAX || static_cast<long>(value) < INT_MIN)
		return "Error: too large number";
	_value = value;
	_date = line.substr(0, 10);
	return "";
}

void BitcoinExchange::conversion()
{
	std::map<std::string, float>::iterator it = _db.begin();
	for (; it != _db.end(); ++it)
		if (it->first > _date)
			break;
	if (it != _db.begin())
		--it;
	_valueExchanged = _value * it->second;
}

int BitcoinExchange::err_out(std::string err)
{
	std::cerr << err << std::endl;
	exit(1);
}