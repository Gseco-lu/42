/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:55 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:55 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public  virtual  ClapTrap {

	private:


	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &scavtrap);
		ScavTrap &operator=(const ScavTrap &scavtrap);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);

};


#endif