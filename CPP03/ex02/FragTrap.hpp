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

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string name;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &S);
	~FragTrap();
	void operator=(const FragTrap &c);
	void highFivesGuys(void);
};

#endif