/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:21:50 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/16 15:37:59 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
# define PRESIDENTIALPARDON_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		PresidentialPardonForm();
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
		std::string _target;

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();
		std::string getTarget() const;
		void execution() const;

		
};

#endif