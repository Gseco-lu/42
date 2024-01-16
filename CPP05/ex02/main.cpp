/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:21:16 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/16 16:03:12 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat a("Ary", 19);
		Bureaucrat b("Bert", 138);
		ShrubberyCreationForm S("CCCCCCCC");
	
		std::cout << a <<std::endl;
		std::cout << b <<std::endl;
		std::cout << S << std::endl;
		
		b.executeForm(S);
		a.executeForm(S);
		a.signForm(S);
		b.executeForm(S);
		b.increment();
		b.executeForm(S);
		a.executeForm(S);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "______________________________________" << std::endl;
	try
	{
		Bureaucrat c("CCCCCC", 46);
		Bureaucrat d("DDDDDDD", 3);
		RobotomyRequestForm R("SSSSSSS");
		PresidentialPardonForm P("HHHH");
		
		std::cout << c <<std::endl;
		std::cout << d <<std::endl;
		
		c.executeForm(R);
		c.executeForm(P);
		c.signForm(P);
		c.signForm(R);
		c.increment();
		
		d.executeForm(R);
		d.executeForm(P);
		d.signForm(P);
		d.signForm(R);
		c.executeForm(P);
		d.executeForm(P);
		d.executeForm(R);
		d.executeForm(R);
		c.executeForm(R);
		c.executeForm(R);
		c.executeForm(R);
		c.executeForm(R);
		d.executeForm(R);
		d.executeForm(R);
		d.executeForm(R);
		d.executeForm(R);
		d.executeForm(P);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}