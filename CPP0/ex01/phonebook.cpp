/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:16:29 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/13 15:16:29 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>
#include "phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "[Phonebook created]" << std::endl;
}

int Phonebook::_next_empty_index = 0;

Phonebook::~Phonebook(void)
{
	std::cout << "[Phonebook deleted]" << std::endl;
}


void	Phonebook::add(void)
{
	std::string str[5];
	int i;

	std::cout << "   First name: ";
	std::getline(std::cin, str[0]);
	std::cout << "   Last name: ";
	std::getline(std::cin, str[1]);
	std::cout << "   Nickname: ";
	std::getline(std::cin, str[2]);
	std::cout << "   Phone number? ";
	std::getline(std::cin, str[3]);
	std::cout << "   Darkest secret: ";
	std::getline(std::cin, str[4]);
	std::cout << "\n";
	
	for (i = 0; i < 5; i++)
	{
		if (str[i].empty())
		{
			std::cerr << "Error. Contacts can't have empty fields." << std::endl;
			return ;
		}
	}
	for (int k = 0; k < (int)str[3].size(); k++)
	{
		if (!isdigit(str[3][k]))
		{
			std::cerr << "Error. Phone numbers can only contain digits." << std::endl;
			return ;
		}
	}
	if (this->_next_empty_index == 8)
		this->_next_empty_index = 0;
	i = this->_next_empty_index++;
	this->_list[i].first_name = str[0];
	this->_list[i].last_name = str[1];
	this->_list[i].nickname = str[2];
	this->_list[i].phone_number = str[3];
	this->_list[i].secret = str[4];
	std::cout << "Contact successfully added." << std::endl;
}

void	Phonebook::_info(std::string str) const
{
	int w = 0;

	if (str.size() < 10)
		w = 11 - str.size();
	std::cout << std::setw(w);
	for (int i = 0; i < (int)str.size(); i++)
	{
		if (i == 9 && str.size() > 10)
		{
			std::cout << ".";
			break ;
		}
		std::cout << str[i];
	}
}

void	Phonebook::_get_info(Contact cont, int i) const
{
	if (cont.first_name.empty())
		return ;
	std::cout << std::setw(9) << i << "|";
	_info(cont.first_name);
	std::cout << "|";
	_info(cont.last_name);
	std::cout << "|";
	_info(cont.nickname);
	std::cout << std::endl;
}

void	Phonebook::search(void) const
{
	std::string ind;

	for (int i = 0; i < 8; i++)
		_get_info(this->_list[i], i);	
	std::cout << "Contact index: ";
	std::getline(std::cin, ind);
	if (ind.size() != 1 || (ind.size() == 1 && ((ind[0] < '0' || ind[0] > '7') || \
		 this->_list[std::atoi(ind.c_str())].first_name.empty())))
	{
		std::cerr << "Error. index out of range." << std::endl;
		return ;
	}
	std::cout << this->_list[std::atoi(ind.c_str())].first_name << std::endl;
	std::cout << this->_list[std::atoi(ind.c_str())].last_name << std::endl;
	std::cout << this->_list[std::atoi(ind.c_str())].nickname << std::endl;
	std::cout << this->_list[std::atoi(ind.c_str())].phone_number << std::endl;
	std::cout << this->_list[std::atoi(ind.c_str())].secret << std::endl;
}