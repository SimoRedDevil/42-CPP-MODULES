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
};

inline std::ostream& operator << (std::ostream& outStream, const Fixed &obj)
{
    outStream << obj.toFloat();
    return outStream;
}

#endif