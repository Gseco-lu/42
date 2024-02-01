/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:17:20 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/02/01 14:51:45 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void print(const T& x )
{
  std::cout << x << std::endl;
  return;
}

template <typename T>
void iter(T* arr, std::size_t len, void (*func)(T &t))
{
	for (std::size_t i = 0; i < len; i++)
		func(arr[i]);
}

template <typename T>
void iter(T* arr, std::size_t len, void (*func)(T const &t))
{
	for (std::size_t i = 0; i < len; i++)
		func(arr[i]);
}


#endif