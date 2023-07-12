/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:30:12 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/12 11:30:21 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"


class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		~Ice();
		
		Ice & operator=(const Ice &assign);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
		
	private:
		
};

#endif