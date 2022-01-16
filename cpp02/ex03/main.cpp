#include "Point.hpp"

int main() {
	Point   A(Fixed(0), Fixed(5));
	Point   B(Fixed(5), 0);
	Point	C(Fixed(5), Fixed(0.0f));
	Point   point(-1.99f, 1.99f);
    
	if (bsp(A, B, C, point))
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is not in triangle" << std::endl;


	if (bsp(Point(0,0), Point(5,0), Point(0,5), Point(1,1)))
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is not in triangle" << std::endl;


	if (bsp(Point(0,0), Point(5,0), Point(0,5), Point(0,1)))
		std::cout << "Point is in triangle" << std::endl;
	else
		std::cout << "Point is not in triangle" << std::endl;

	return 0;
}