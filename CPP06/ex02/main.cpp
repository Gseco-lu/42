/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:11:55 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/12 14:11:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

int main()
{
	Base *base = NULL;
	base = base->generate();
	std::cout << "ID by ptr: "; 
	base->identify(base);
	std::cout << "ID by ref: "; 
	base->identify(base);
	delete base;

}