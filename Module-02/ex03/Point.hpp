#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	
	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point(const Point &copy);
		Point & operator = (const Point &object);

		Fixed getX(void) const;
		Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif