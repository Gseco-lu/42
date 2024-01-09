/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:24:03 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/02 16:24:21 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _signGrade(1), _execGrade(1)
{
	std::cout << "\e[0;33mDefault Constructor called of AForm\e[0m" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _isSigned(false), \
_signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "\e[0;33mDefault Constructor called of Form \e[0m" << this->_name << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw(AForm::GradeTooHighException());
	else if (signGrade > 150 || execGrade > 150)
		throw(AForm::GradeTooLowException());
}
AForm::AForm(const AForm &copy) : _name(copy.getName()), _isSigned(copy.getSignBool()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade())
{
	std::cout << "\e[0;33mCopy Constructor called of AForm\e[0m" << std::endl;
}

AForm::~AForm()
{
	std::cout << "\e[0;31mDestructor called of AForm\e[0m" << std::endl;
}

AForm & AForm::operator=(const AForm &assign)
{
	if (this->_signGrade <= assign.getSignGrade())
		this->_isSigned = assign.getSignBool();
	else
		throw AForm::GradeTooLowException();
	return *this;
}

const char* AForm::GradeTooLowException::what() const throw() 
{
	return "Grade is too low";
}

const char* AForm::GradeTooHighException::what() const throw() 
{
	return "Grade is too high";
}

const char* AForm::UnsignedException::what() const throw() 
{
	return "Form is not signed";
}

std::ostream &operator<<(std::ostream &out, AForm &F) 
{
	out << "Form " << F.getName() << ":" << std::endl;
	out << "\tSigned: " << F.getSignBool() << std::endl;
	out << "\tRequired Sign Grade: " << F.getSignGrade() << std::endl;
	out << "\tRequired Execution Grade: " << F.getExecGrade() << std::endl;
	return out;
}

void AForm::beSigned(Bureaucrat &B)
{	
	if (B.getGrade() > this->getSignGrade())
		throw AForm::GradeTooLowException();
	else
		this->_isSigned = true;
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	else if (this->_isSigned == false)
		throw AForm::UnsignedException();
	execution();
}


std::string AForm::getName() const { return _name; }
bool AForm::getSignBool() const { return _isSigned; }
int AForm::getSignGrade() const { return _signGrade; }
int AForm::getExecGrade() const { return _execGrade; }