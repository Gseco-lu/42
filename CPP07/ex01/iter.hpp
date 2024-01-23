/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:17:20 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/23 17:50:44 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void print(T &t)
{
	std::cout << t << " " << std::endl;
}

template <typename T>
void iter(T	*arr, std::size_t len, void (*func)(T &t))
{
	for (std::size_t i = 0; i < len; i++)
		func(arr[i]);
}


#endif