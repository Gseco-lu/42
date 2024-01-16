/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:11:11 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/16 20:38:09 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <string>
#include <iostream>

class Base
{

    public:
        virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
#endif