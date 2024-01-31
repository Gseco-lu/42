/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:23:39 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/31 20:33:46 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <string>
# include <vector>

class Span
{
	private:
		unsigned int _max;
		unsigned int _size;
		std::vector<int> _value;
		int difference(int a, int b);
	public:
		Span();
		Span(unsigned int n);
		~Span();
		void fillArray(int randmax);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();


};

#endif