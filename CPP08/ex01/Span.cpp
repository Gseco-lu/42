/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:22:37 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/31 20:20:31 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _max(0), _size(0)
{
}

Span::Span(unsigned int n): _max(n), _size(0)
{
}

Span::~Span()
{
    
}

void Span::fillArray(int randmax)
{
	_value.clear();
	srand(time(0));
	for (unsigned int i = 0; i < _max; i++)
		addNumber(rand() % randmax);
}

int Span::difference(int a, int b)
{
    a = a - b;
    if (a < 0)
        a = -a;
    return (a);
}

int Span::shortestSpan()
{
    if (_value.size() < 2)
		throw std::exception();
    int dif = __INT_MAX__;
    int r = 0; 
    for (unsigned int i = 0; i < _size; i++)
    {
        unsigned int j = 0;
        while (j++ < _size)
        {
            if (i == j)
                continue;
            r = difference(_value[i], _value[j]);
            if (r < dif)
                dif = r;
        }
    }
    return (dif);
}



int Span::longestSpan()
{
    if (_value.size() < 2)
		throw std::exception();
    int min = *std::min_element(_value.begin(), _value.end());
    int max =  *std::max_element(_value.begin(), _value.end());
    return (max - min);
}

void Span::addNumber(int n)
{
    if (_size >= _max)
        throw std::exception();
    _size++;
    _value.push_back(n);
}
