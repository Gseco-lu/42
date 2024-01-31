/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:18:42 by gseco-lu          #+#    #+#             */
/*   Updated: 2024/01/31 19:17:31 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <vector>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _size;

	public:
		Array<T>() : _size(0)
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
			_arr = new T[0];
		}

		Array<T>(unsigned int n) : _size(n)
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
			_arr = new T[n];
		}

		Array<T>(const Array &copy)
		{
			_arr = new T[copy.size()];
			_size = copy.size();
			for (unsigned int i = 0; i < copy.size(); i++)
				_arr[i] = copy[i];
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
		}

		~Array<T>()
		{
			delete [] _arr;
			std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
		}
        
		Array<T> & operator=(const Array<T> &assign)
		{
			std::cout << "\e[0;33mAssignment Operator called of Array\e[0m" << std::endl;
			if (this != &assign)
			{
				delete [] _arr;
				_arr = new T[assign.size()];
				_size = assign.size();
				for (unsigned int i = 0; i < assign.size(); i++)
					_arr[i] = assign[i];
			}
			return *this;
		}
		T & operator[](unsigned int n)
		{
			if (n >= _size || n < 0)
				throw std::exception();
			return _arr[n];
		}

		const T & operator[](unsigned int n) const
		{
			if (n >= _size || n < 0)
				throw std::exception();
			return _arr[n];
		}
		
		unsigned int size() const { return _size; }

};

#endif