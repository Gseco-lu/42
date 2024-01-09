/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:16:56 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/09 16:27:35 by gseco-lu         ###   ########.fr       */
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
		// Form f1("Anti-Vaxxers", 0, 46);
		std::cout << f << std::endl;
		a.signForm(f);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
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
		Bureaucrat a("qwerty", 20);
		std::cout << a <<std::endl;
		Form f("ytrewq", 18, 46);
		std::cout << f << std::endl;
		a.signForm(f);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
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
		Bureaucrat a("Al", 21);
		std::cout << a <<std::endl;
		Form f("El", 23, 17);
		std::cout << f << std::endl;
		a.signForm(f);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
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