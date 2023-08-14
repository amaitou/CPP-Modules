#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point point(10, 15);

	if (bsp(a, b, c, point))
		std::cout << "In Triangle" << std::endl;
	else
		std::cout << "Not In Triangle" << std::endl;
}