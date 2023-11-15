#include "Point.hpp"

static float calculateArea(Point const a, Point const b, Point const c)
{
    Fixed i = (a.get_x() - b.get_x()) * (a.get_y() - c.get_y());
    Fixed j = (a.get_x() - c.get_x()) * (a.get_y() - b.get_y());
    float area = 0.5 * fabs(i.toFloat() - j.toFloat());
    return area;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float abcArea = calculateArea(a, b, c);
    float apcArea = calculateArea(a, point, c);
    float apbArea = calculateArea(a, point, b);
    float pbcArea = calculateArea(point, b, c);
    if (abcArea != apcArea + apbArea + pbcArea
        || apcArea == 0 || apbArea == 0 || pbcArea == 0)
        return false;
    return true;
}