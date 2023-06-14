/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:12:14 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 10:20:12 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bits/stdc++.h>

Fixed::Fixed()
{
	raw_bits = 0;
}

Fixed::Fixed(int const i)
{
	this->raw_bits = (i << Fixed::bits);
}

Fixed::Fixed(float const f)
{
	this->raw_bits = roundf(f * (1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &fixed)
{
	raw_bits = fixed.raw_bits;
}

Fixed::~Fixed()
{
}
std::ostream &operator<<(std::ostream &stream, const Fixed& fp)
{
	stream << fp.toFloat();
	return stream;
}

bool Fixed::operator>(const Fixed &fixed)
{
	return (getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed)
{
	return (getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return (getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return (getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed)
{
	return (getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed)
{
	return (getRawBits() != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	if (((getRawBits() + fixed.getRawBits()) > (INT_MAX >> bits)) || ((getRawBits() + fixed.getRawBits()) < (INT_MIN >> bits))) {
		std::cout << "Exceed the limits" << std::endl;
		return *this;
	}
	Fixed temp;
	temp.setRawBits(getRawBits() + fixed.getRawBits());
	return temp;
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	if ((getRawBits() - fixed.getRawBits() > (INT_MAX >> bits)) || ((getRawBits() - fixed.getRawBits()) < (INT_MIN >> bits))) {
		std::cout << "Exceed the limits" << std::endl;
		return *this;
	}
	Fixed temp;
	temp.setRawBits(getRawBits() - fixed.getRawBits());
	return temp;
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	if (((const int)(toFloat() * fixed.toFloat()) > (__INT_MAX__ >> bits)) || ((const int)(toFloat() * fixed.toFloat()) < (INT_MIN >> bits)))
		return *this;
	Fixed temp(toFloat() * fixed.toFloat());
	return temp;
}

Fixed Fixed::operator++()
{
	Fixed temp;
	temp.setRawBits(++raw_bits);
	return temp;
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
    temp.setRawBits(raw_bits++);
	return temp;
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	if (((const int)(toFloat() / fixed.toFloat()) > (__INT_MAX__ >> bits)) || ((const int)(toFloat() / fixed.toFloat()) < (INT_MIN >> bits)))
		return *this;
	Fixed temp(toFloat() / fixed.toFloat());
	return temp;
}

Fixed Fixed::operator--()
{
	Fixed temp;
    temp.setRawBits(--raw_bits);
	return temp;
}

Fixed Fixed::operator--(int)
{
	Fixed temp; 
    temp.setRawBits(raw_bits--);
	return temp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed &)a < (Fixed &)b)
		return a;
	else
		return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed &)a > (Fixed &)b)
		return a;
	else
		return b;
}

int Fixed::getRawBits(void) const
{
	return (raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->raw_bits = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->raw_bits / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->raw_bits >> Fixed::bits);
}
