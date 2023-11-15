#include "Point.hpp"

static void bspTester(Point a, Point b, Point c, Point p)
{
    if (bsp(a, b, c, p))
        std::cout << "Point(" << p.get_x().toFloat() << "," << p.get_y().toFloat() << ") inside triangle\n";
    else
        std::cout << "Point(" << p.get_x().toFloat() << "," << p.get_y().toFloat() << ") outside triangle\n";
}

int main(void)
{
    Point a(0, 0);
    Point b(10, 30);
    Point c(20, 0);
    bspTester(a, b, c, Point(10, 15));
    bspTester(a, b, c, Point(25, 15));
    bspTester(a, b, c, Point(20, 0));
    return 0;
}

