/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:23:39 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/12 14:23:40 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>

class Span
{
    private:
		Span();
		std::vector<int> _arr;
		unsigned int _storage;
		int _short;
		void updateShort(int a, int b);

	public:
		Span(unsigned int N);
		Span(const Span &copy);
		~Span();
		Span & operator=(const Span &assign);
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void fillArray(int N);
		int &operator[](unsigned int n);
};

#endif