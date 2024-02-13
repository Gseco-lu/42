/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:39:34 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/02/06 15:39:35 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << "Error: Program requires additional arguments." << std::endl;
		return (0);
	}
	int i = 0;
	while (av[i])
		i++;
	PmergeMe::execute(++av, i - 1);
}