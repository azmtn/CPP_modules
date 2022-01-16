#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
		{
		private:
			Fixed const _x;
			Fixed const _y;
		public:
			Point();
			~Point();
			Point(const Point& p);
			Point(const float x, const float y);
			Point(const Fixed x, const Fixed y);
			Point& operator=(const Point& p);
			bool operator==(const Point& p) const;
			Fixed getX() const;
			Fixed getY() const;

		};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif