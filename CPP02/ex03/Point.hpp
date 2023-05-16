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
	~Point();
	Point &operator=(const Point &P);
	Fixed getX() const;
	Fixed getY() const;
};

#endif
