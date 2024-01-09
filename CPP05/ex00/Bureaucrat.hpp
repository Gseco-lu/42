/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:14:10 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/09 16:03:40 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

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
		
		void increment();
		void decrement();
		class GradeTooHighException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};
		
	

};

std::ostream &operator <<(std::ostream &out, const Bureaucrat &B);

#endif