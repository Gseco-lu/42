/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:24:59 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/09 16:02:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
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
		void signForm(AForm &F);
		void executeForm(AForm const & form);
		
	private:
		Bureaucrat();
		const std::string _name;
		int _grade;

};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &B);

#endif