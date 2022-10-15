#include "Point.hpp"

int main(void)
{

	Point a, b(20, 0), c(10, 5);
	Point in(10, 1), in2(17, 1);
	Point out(20, 20);
	Point rib(10, 0);

	std::cout << std::boolalpha;
	std::cout << bsp(a, b, c, in) << std::endl;
	std::cout << bsp(a, b, c, in2) << std::endl;
	std::cout << bsp(a, b, c, out) << std::endl;
	std::cout << bsp(a, b, c, rib) << std::endl;
	return 0;
}