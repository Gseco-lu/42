/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:21:44 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:21:44 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP_
# define DIAMONDTRAP_HPP_

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;
	DiamondTrap();
	
public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &D);
	~DiamondTrap();
	void operator=(DiamondTrap const &D);

	void whoAmI();
};


#endif