/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:28:25 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/10 16:22:58 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib> 
# include "AForm.hpp"
class RobotomyRequestForm : public AForm
{
	private:
		RobotomyRequestForm();
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
		std::string _target;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
		std::string getTarget() const;
		virtual void execution() const;

		
};
#endif