/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:19:28 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/09 16:02:57 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		class GradeTooHighException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};
		class UnsignedException : public std::exception	{
			public:
				virtual const char* error_type() const throw();
		};

		virtual void beSigned(Bureaucrat &B);
		virtual std::string getName() const;
		virtual bool getSignBool() const;
		virtual int getSignGrade() const;
		virtual int getExecGrade() const;
		void execute(Bureaucrat const & executor) const;
		void CatchExceptions(Bureaucrat const &) const;
	
	protected:
		AForm(std::string name, int signGrade, int execGrade);
		AForm(const AForm &copy);
		AForm & operator=(const AForm &assign);
		virtual ~AForm();
		virtual void execution() const = 0;
		
		
		
	private:
		AForm();
		std::string const _name;
		bool _isSigned;
		int const _signGrade;
		int const _execGrade;
};

std::ostream & operator<<(std::ostream &out, AForm &F);

#endif