#include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed(void) : rawData(0)
{

}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    if (this == &obj)
        return *this;
    this->rawData = obj.rawData;
    return *this;
}

Fixed::~Fixed(void)
{
    
}

Fixed::Fixed(const int num) : rawData(num << fractBits)
{

}

Fixed::Fixed(const float num) : rawData((int)roundf(num * (1 << fractBits)))
{

}

float Fixed::toFloat(void) const
{
    float result = (float)rawData / (1 << fractBits);
    return result;
}

int Fixed::toInt(void) const
{
    return rawData >> fractBits;
}

bool Fixed::operator>(const Fixed &obj)
{
    return this->rawData > obj.rawData;
}

bool Fixed::operator<(const Fixed &obj)
{
    return this->rawData < obj.rawData;
}

bool Fixed::operator>=(const Fixed &obj)
{
    return this->rawData >= obj.rawData;
}

bool Fixed::operator<=(const Fixed &obj)
{
    return this->rawData <= obj.rawData;
}

bool Fixed::operator==(const Fixed &obj)
{
    return this->rawData == obj.rawData;
}

bool Fixed::operator!=(const Fixed &obj)
{
    return this->rawData != obj.rawData;
}

Fixed Fixed::operator+(const Fixed &obj)
{
    Fixed result(this->toFloat() + obj.toFloat());
    return result;
}

Fixed Fixed::operator-(const Fixed &obj)
{
    Fixed result(this->toFloat() - obj.toFloat());
    return result;
}

Fixed Fixed::operator*(const Fixed &obj)
{
    Fixed result(this->toFloat() * obj.toFloat());
    return result;
}

Fixed Fixed::operator/(const Fixed &obj)
{
    Fixed result(this->toFloat() / obj.toFloat());
    return result;
}

Fixed &Fixed::operator++(void)
{
    ++rawData;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    rawData++;
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    --rawData;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    rawData--;
    return tmp;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return f1;
    return f2;
}

Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.rawData < f2.rawData)
        return const_cast<Fixed&>(f1);
    return const_cast<Fixed&>(f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return f1;
    return f2;
}

Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.rawData > f2.rawData)
        return const_cast<Fixed&>(f1);
    return const_cast<Fixed&>(f2);
}