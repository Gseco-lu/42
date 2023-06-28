/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:11 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:11 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

	private:


	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &s);
		FragTrap &operator=(const FragTrap &s);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);

};


#endif