/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:59:45 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/21 14:59:45 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

static int	find_s1(std::string in, int i, char *s1)
{
	int j;

	for (j = 0; in[i] && s1[j] && in[i] == s1[j]; i++, j++)
		;
	if (!s1[j])
		return 1;
	return 0;
}

int main(int ac, char **av)
{
	std::string text;
	std::string replace_file;

	if (ac != 4)
	{
		std::cout << "Invalid argument count" << std::endl;
		return 1;
	}
	std::ifstream in(av[1]);
	if (!in.is_open())
	{
		std::cout << "Invalid filename" << std::endl;
		return 1;
	}
	while (!in.eof())
		std::getline(in, text, '\0');
	in.close();
	replace_file = av[1];
	replace_file.append(".replace");
	std::ofstream out(replace_file.c_str());
	for (int i = 0; text[i]; i++)
	{
		if (text[i] == av[2][0] && find_s1(text, i, av[2]))
		{
			for (int j = 0; av[3][j]; j++)
				out << av[3][j];
			i += std::strlen(av[2]) - 1;
		}
		else
			out	<< text[i];
	}
	out.close();
}
