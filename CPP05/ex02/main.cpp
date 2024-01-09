/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:21:16 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/09 16:02:57 by gseco-lu         ###   ########.fr       */
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
		Bureaucrat a("Arnold", 19);
		Bureaucrat b("Ben", 138);
		ShrubberyCreationForm S("Cowabunga");
	
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
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (AForm::UnsignedException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	std::cout << "______________________________________" << std::endl;
	try
	{
		Bureaucrat c("Cronix", 46);
		Bureaucrat d("Darius", 3);
		RobotomyRequestForm R("Shrek");
		PresidentialPardonForm P("Homer Simpson");
		
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
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
	catch (AForm::UnsignedException &e)
	{
		std::cout << e.error_type() << std::endl;
	}
}