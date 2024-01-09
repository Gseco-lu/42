/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:16:53 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/09 16:19:37 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		Form();
		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _execGrade;
	
	public:
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &copy);
		~Form();
		Form & operator=(const Form &assign);
		
		void beSigned(Bureaucrat &B);

		std::string getName() const;
		bool getSignBool() const;
		int getSignGrade() const;
		int getExecGrade() const;
	
		class GradeTooHighException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};
		
	
		
		
};
std::ostream & operator<<(std::ostream &out, Form &F);

#endif