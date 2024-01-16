/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:04:25 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/16 16:16:12 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "\e[0;33mDefault Constructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
   
    if (grade < 1)
	{
        throw(GradeTooHighException());
	}
    else if (grade > 150)
	{
        throw(GradeTooLowException()); 
	}
	std::cout << "\e[0;33mParameter Constructor called of Bureaucrat \e[0m" << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()), _grade(copy.getGrade())
{
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrat\e[0m" << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrat\e[0m" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	_grade = assign.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}
	
int Bureaucrat::getGrade() const
{
	return this->_grade;
}


std::ostream &operator <<(std::ostream &out, const Bureaucrat &B)
{
	out << B.getName() << ", bureaucrat grade " << B.getGrade() << ".";
	return out;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Grade is too high");
}

void Bureaucrat::decrement()
{
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void Bureaucrat::increment()
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}
