#include "Point.hpp"

Point::Point() : _x(0), _y(0) { }

Point::Point(float const x, float const y) : _x(x), _y(y) { }

Point::Point(const Point &cpy) : _x(cpy.getX()), _y(cpy.getY()) { }

Point::~Point() { }

Fixed const Point::getX() const
{
	return (_x);
}

Fixed const Point::getY() const
{
	return (_y);
}