/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:12:06 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:13:40 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float fx, const float fy) : x(fx), y(fy)
{
}

Point::Point(Point const &fixed) : x(fixed.getX()), y(fixed.getY())
{
}


Point &Point::operator=(const Point& P)
{
	Point(P.x.toFloat(), P.y.toFloat());	
	return *this;
}
Point::~Point()
{
}

Fixed Point::getX() const
{
	return x;
}
Fixed Point::getY() const
{
	return y;
}
