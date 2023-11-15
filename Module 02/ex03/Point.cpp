#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{

}

Point::Point(const Fixed& _x, const Fixed& _y) : x(_x), y(_y)
{

}

Point::Point(const Point& obj) : x(obj.x), y(obj.y)
{

}

Point& Point::operator=(const Point& obj)
{
    if (this == &obj)
        return *this;
    return *this;
}

Point::~Point(void)
{
    
}

Fixed& Point::get_x(void) const
{
    return const_cast<Fixed&>(this->x);
}

Fixed& Point::get_y(void) const
{
    return const_cast<Fixed&>(this->y);
}