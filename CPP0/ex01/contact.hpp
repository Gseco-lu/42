/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:17:02 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/13 15:17:02 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
private:

public:
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	Contact(void);
	~Contact(void);
	
};

#endif