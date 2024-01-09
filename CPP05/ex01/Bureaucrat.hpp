/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:16:47 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/09 16:26:38 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		Bureaucrat();
		const std::string _name;
		int _grade;
		
	public:
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &assign);

		std::string getName() const;
		int getGrade() const;

		class GradeTooHighException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};
		
		void increment();
		void decrement();
		void signForm(Form &F);
		
	

};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &B);

#endif