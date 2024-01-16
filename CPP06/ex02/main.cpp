/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:11:55 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/16 20:37:48 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main()
{
	Base *base = generate();
	std::cout << "ID by ptr: "; 
	identify(base);
	std::cout << "ID by ref: "; 
	identify(base);
	delete base;

}