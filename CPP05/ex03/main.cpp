/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:26:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/10 16:15:15 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
		Intern J;
		AForm *form;
		{
			Bureaucrat B("B", 6);
			form = J.makeForm("robotomy request", "SSSS");
			std::cout << *form << std::endl;
			B.signForm(*form);
			B.executeForm(*form);
			delete form;
		}
		{
			form = J.makeForm("shrubbery creation", "FFFFF");
			std::cout << *form << std::endl;
			delete form;
		}
		{
			form = J.makeForm("presidential pardon", "DDDD");
			std::cout << *form << std::endl;
			delete form;
		}
		{
			form = J.makeForm("afsdfafd", "QQQ");
		}
		{
			form = J.makeForm("", "PPP");
		}
		
}