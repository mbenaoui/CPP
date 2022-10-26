#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int FixedPoint;
		static const int bits = 8;
	public:
		Fixed();
		Fixed( Fixed &src);
		~Fixed();
		Fixed & operator = (const Fixed &src);
		int getRawBits( void ) const;
		void setRowBits( int const row );
};

#endif
