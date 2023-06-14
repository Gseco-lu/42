/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:44:30 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/06/07 16:18:44 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool vert_on_edge(Point const a, Point const b, Point const c, Point point)
{
	float ax = a.getX().toFloat();
	float ay = a.getY().toFloat(); 
	float bx = b.getX().toFloat();
	float by = b.getY().toFloat();
	float cx = c.getX().toFloat();
	float cy = c.getY().toFloat();
	float px = point.getX().toFloat();
	float py = point.getY().toFloat();

	if ((py - ay)/(by-ay) == (px - ax)/(bx-ax) ||\
	(py - by)/(cy-by) == (px - bx)/(cx-bx) || \
	(py - cy)/(ay-cy) == (px - cx)/(ax-cx))
		return true ;
	return false ;
}
float abs(float f)
{
	if (f < 0)
		f = -f;
	return f;
}

// area expression = abs((xB*yA-xA*yB)+(xC*yB-xB*yC)+(xA*yC-xC*yA))/2.
float tri_area(Point const a, Point const b, Point const c)
{
	return abs((b.getX().toFloat() * a.getY().toFloat() - a.getX().toFloat() * b.getY().toFloat()) + \
	(c.getX().toFloat() * b.getY().toFloat() - b.getX().toFloat() * c.getY().toFloat()) + \
	(a.getX().toFloat() * c.getY().toFloat() - c.getX().toFloat() * a.getY().toFloat())) /2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (vert_on_edge(a, b, c, point))
		return false;
	const float triArea = tri_area(a,b,c);
	const float t1 = tri_area(point, a, b);
	const float t2 = tri_area(point,b, c);
	const float t3 = tri_area(point,a,c);
	
	if (t1 + t2 + t3 == triArea)
		return true;
	return false;
}
