/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:39:19 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/02/06 15:39:20 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "\e[0;31mError: Wrong number of arguments\e[0m" << std::endl;
		return (1);
	}
	RPN::execute(av[1]);
	// (void) ac; (void) av;
	// RPN::execute("8 9 * 9 - 9 - 9 - 4 - 1 +"); //42
	// RPN::execute("7 7 * 7 -"); //42
	// RPN::execute("1 2 * 2 / 2 * 2 4 - +"); //0
}