/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:17:17 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/31 18:19:25 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int &i)
{
	i++;
}

void halfinc(float &i)
{
	i += 0.5f;
}

int main( void ) {
	
int arr[] = { 0, 1, 2, 3, 4 };
iter(arr, 5, increment);
iter(arr, 5, print);
std::cout << std::endl;

char str[] = "Hello hello World!";
iter(str, 13, print);
std::cout << std::endl;

float farr[] = { 0.0f, 1.0f, 2.0f, 3.0f, 4.0f };
iter(farr, 5, halfinc);
iter(farr, 5, print);
std::cout << std::endl;

}