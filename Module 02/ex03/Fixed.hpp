#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int rawData;
        static const int fractBits;
    public:
        Fixed(void);
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &obj);
        ~Fixed(void);

        Fixed(const int num);
        Fixed(const float num);
        float toFloat(void) const;
        int toInt(void) const;

        /*COMPARISON OVERLOADED OPERATORS*/
        bool operator>(const Fixed &obj);
        bool operator<(const Fixed &obj);
        bool operator>=(const Fixed &obj);
        bool operator<=(const Fixed &obj);
        bool operator==(const Fixed &obj);
        bool operator!=(const Fixed &obj);

        /*ARITHMETIC OVERLOADED OPERATORS*/
        Fixed operator+(const Fixed &obj);
        Fixed operator-(const Fixed &obj);
        Fixed operator*(const Fixed &obj);
        Fixed operator/(const Fixed &obj);
        
        /*INCREMENT-DECREMENT OPERATORS*/
        Fixed &operator++(void);
        Fixed operator++(int);
        Fixed &operator--(void);
        Fixed operator--(int);

        static Fixed &min(Fixed &f1, Fixed &f2);
        static Fixed &min(const Fixed &f1, const Fixed &f2);
        static Fixed &max(Fixed &f1, Fixed &f2);
        static Fixed &max(const Fixed &f1, const Fixed &f2);
};

inline std::ostream &operator<<(std::ostream& outStream, const Fixed &obj)
{
    outStream << obj.toFloat();
    return outStream;
}

#endif