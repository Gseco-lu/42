#include "Fixed.hpp"
#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float fx, const float fy) : x(fx), y(fy)
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
