#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int FixedPoint;
    static const int bits = 8;

public:
    Fixed();
    Fixed(const int number);
    Fixed(const float number);
    Fixed(const Fixed &src);
    ~Fixed();
    Fixed &operator=(const Fixed &src);
    Fixed operator++(int);
    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator--(int);
    Fixed operator+(const Fixed &src);
    Fixed operator-(const Fixed &src);
    Fixed operator*(const Fixed &src);
    bool operator>(const Fixed &src) const;
    bool operator<(const Fixed &src) const;
    bool operator>=(const Fixed &src) const;
    bool operator<=(const Fixed &src) const;
    bool operator==(const Fixed &src) const;
    bool operator!=(const Fixed &src) const;
    static Fixed &min(Fixed &src, Fixed &tes);
    static const Fixed &min(const Fixed &src, const Fixed &tes);
    static Fixed &max(Fixed &src, Fixed &tes);
    static const Fixed &max(const Fixed &src, const Fixed &tes);
    int getRawBits(void) const;
    void setRowBits(int const row);
    float toFloat(void) const;
    int toInt(void) const;
};
#endif