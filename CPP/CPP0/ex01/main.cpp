#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

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