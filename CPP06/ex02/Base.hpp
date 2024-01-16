/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:11:11 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/12 14:11:33 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class A;
class B;
class C;
class Base
{
	public:
		virtual ~Base();
		Base & operator=(const Base &assign);
		Base *generate(void);
		void identify(Base* p);
		void identify(Base& p);

		
};

class A : public Base {};
class B : public Base  {};
class C  : public Base {};

#endif