/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:23:33 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/12 14:23:35 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(10);
	sp.addNumber(3);
	sp.addNumber(6);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(134);
	sp.fillArray(1000);
	std::cout << "shortest = " << sp.shortestSpan() << std::endl;
	std::cout << "longest = " <<  sp.longestSpan() << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << sp[i] << std::endl;
	return 0;
}