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
    this->rawData = obj.getRawBits();
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return rawData;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    rawData = raw;
}