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
		Fixed( const int number );
		Fixed( const float number );
        Fixed(  const Fixed &src);
		~Fixed();
		Fixed & operator = (const Fixed &src);
		int getRawBits( void ) const;
		void setRowBits( int const row );
        float toFloat( void ) const;
        int toInt( void ) const;
};

#endif
