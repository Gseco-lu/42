/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:12:04 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/14 14:13:59 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP_
# define POINT_HPP_

# include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;

public:
	Point();
	Point(const float fx, const float fy);
	Point(Point const &fixed);
	~Point();
	Point &operator=(const Point &P);
	Fixed getX() const;
	Fixed getY() const;
};

#endif
