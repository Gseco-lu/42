/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:00:04 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/21 15:00:04 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:	
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		Harl();
		~Harl();

		void complain( std::string problem );
};

#endif
