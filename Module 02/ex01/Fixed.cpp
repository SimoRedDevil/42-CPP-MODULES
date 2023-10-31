#include "Fixed.hpp"

const int Fixed::fractBits = 8;

Fixed::Fixed(void) : rawData(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called\n";
    *this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called\n";
    if (this == &obj)
        return *this;
    this->rawData = obj.rawData;
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const int num) : rawData(num << fractBits)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float num) : rawData((int)roundf(num * (1 << fractBits)))
{
    std::cout << "Float constructor called\n";
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