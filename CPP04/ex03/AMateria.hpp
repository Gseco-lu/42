/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:22:06 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/07/20 12:28:18 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
		AMateria();
		
		AMateria(const AMateria &copy);
	
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria & operator=(const AMateria &assign);
		
		std::string const & getType() const; 
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const = 0;	
};

#endif