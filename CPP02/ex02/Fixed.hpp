/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:14:16 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/05/04 18:34:34 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{

	private:
		static const int bits = 8;
		int	raw_bits;
	public:
		Fixed();
		Fixed(float const raw_bits);
		Fixed(int const raw_bits);
		Fixed(Fixed const &fixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		Fixed &operator=(Fixed const &Fixed);
		bool operator>(const Fixed &fixed);
		bool operator<(const Fixed &fixed);
		bool operator>=(const Fixed &fixed);
		bool operator<=(const Fixed &fixed);
		bool operator==(const Fixed &fixed);
		bool operator!=(const Fixed &fixed);
		Fixed operator+(const Fixed &fixed);
		Fixed operator-(const Fixed &fixed);
		Fixed operator*(const Fixed &fixed);
		Fixed operator/(const Fixed &fixed);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		static Fixed& min(Fixed& a, Fixed&b);
		static const Fixed& min(const Fixed& a, const Fixed&b);
		static Fixed& max(Fixed& a, Fixed&b);
		static const Fixed& max(const Fixed& a, const Fixed&b);
		int toInt(void) const;
		float toFloat(void) const;

};

std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif
