#pragma once
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point(void);
        Point(const Fixed& _x, const Fixed& _y);
        Point(const Point& obj);
        Point& operator=(const Point& obj);
        ~Point(void);
        Fixed& get_x(void) const;
        Fixed& get_y(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif