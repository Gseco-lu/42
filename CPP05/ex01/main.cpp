/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:16:56 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/16 15:59:27 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Al", 19);
		std::cout << a <<std::endl;
		Form f("El", 32, 46);
		std::cout << f << std::endl;
		a.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat a("qwerty", 20);
		std::cout << a <<std::endl;
		Form f("ytrewq", 20, 46);
		f.beSigned(a);
		std::cout << a <<std::endl;
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat a("Al", 24);
		std::cout << a <<std::endl;
		Form f("El", 23, 17);
		std::cout << f << std::endl;
		a.signForm(f);
		std::cout << f << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}