/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:14:44 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/09 16:02:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Al", 20);
		std::cout << a <<std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
	}

	try
	{
		Bureaucrat a("El", 0);
		std::cout << a <<std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
	}

	try
	{
		Bureaucrat a("Ben", 1);
		std::cout << a <<std::endl;
		a.increment();
		std::cout << a <<std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	
	try
	{
		Bureaucrat a("Cro", 4235225);
		std::cout << a <<std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
	}

}