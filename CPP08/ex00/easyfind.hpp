/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:21:00 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/12 14:21:01 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

template <typename T>
typename T::iterator easyfind(T &t, int i)
{
	typename T::iterator it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw std::exception();
	return it;
}

#endif