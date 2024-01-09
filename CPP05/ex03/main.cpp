/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:26:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/02 16:26:16 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
		Intern Jeff;
		AForm *form;
		{
			Bureaucrat Bob("Bob", 6);
			form = Jeff.makeForm("robotomy request", "Shrek");
			std::cout << *form << std::endl;
			Bob.signForm(*form);
			Bob.executeForm(*form);
			delete form;
		}
		{
			form = Jeff.makeForm("shrubbery creation", "Fiona");
			std::cout << *form << std::endl;
			delete form;
		}
		{
			form = Jeff.makeForm("presidential pardon", "Donkey");
			std::cout << *form << std::endl;
			delete form;
		}
		{
			form = Jeff.makeForm("afsdfafd", "Dragon");
		}
		{
			form = Jeff.makeForm("", "Pinnocchio");
		}
		
}