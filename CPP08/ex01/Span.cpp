/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:22:37 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/12 14:22:39 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <cmath>

// Constructors
Span::Span() : _storage(0), _short(INT_MAX)
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(unsigned int N) : _storage(N), _short(INT_MAX)
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
}


// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	(void) assign;
	return *this;
}

void Span::fillArray(int randmax)
{
	_short = INT_MAX;
	_arr.clear();
	srand(time(0));
	for (unsigned int i = 0; i < _storage; i++)
		addNumber(rand() % randmax);
}

void Span::updateShort(int a, int b)
{
	if ((b - a ) < _short)
		_short = b - a;
}

void Span::addNumber(int number)
{
	if (_arr.size() == _storage)
	{
		std::cout << "Storage is full" << std::endl;
		throw std::exception();
	}
	if (_arr.size() == 0)
		_arr.push_back(number);
	else
	{
		if (number <= _arr[0])
		{
			_arr.insert(_arr.begin(), number);
			updateShort(number, _arr[1]);
		}
		else if (number >= _arr[_arr.size() - 1])
		{
			_arr.push_back(number);
			updateShort(_arr[_arr.size() - 2], number);
		}
		else 
		{
			for (std::vector<int>::iterator it = _arr.begin(); it != _arr.end(); it++)
			{
				if (*it < number && *(it + 1) >= number)
				{
					updateShort(number, *(it + 1));
					updateShort(*it, number);
					_arr.insert(it + 1, number);
					break ;
				}
			}
		}
	}
}

int Span::shortestSpan()
{
	if (_arr.size() <= 1)
	{
		std::cout << "Not enough numbers" << std::endl;
		throw std::exception();
	}
	return _short;
}

int Span::longestSpan()
{
	if (_arr.size() <= 1)
	{
		std::cout << "Not enough numbers" << std::endl;
		throw std::exception();
	}
	return _arr[_arr.size() - 1] - _arr[0];
}

int & Span::operator[](unsigned int n)
{
	if (n >= _arr.size())
	{
		std::cout << "Out of range" << std::endl;
		throw std::exception();
	}
	return _arr[n];
}