/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:16:26 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/13 15:16:26 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include "contact.hpp"

int main(int ac, char **av)
{
	Phonebook pb;
	std::string str;	

	while (1)
	{
		std::cout << "> Enter a command: ";
		std::getline(std::cin, str);	
		if (str == "EXIT" || std::cin.eof())
			return (0);
		else if (str == "ADD")
			pb.add();
		else if (str == "SEARCH")
			pb.search();
	}
}