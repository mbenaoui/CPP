#include "Fixed.hpp"
Fixed::Fixed()
{
    //std ::cout << "Default constructor called" << std ::endl;
    this->FixedPoint = 0;
}

Fixed ::Fixed(const Fixed &src)
{
    //std ::cout << "Copy constructor called" << std ::endl;
    this->FixedPoint = src.getRawBits();
}
Fixed ::Fixed(const int number)
{
    //std ::cout << "Int constructor called" << std ::endl;
    this->FixedPoint = number << this->bits;
}
Fixed ::Fixed(const float number)
{
    //std ::cout << "Float constructor called" << std ::endl;
    this->FixedPoint = int(roundf(number * (1 << this->bits)));
}
void Fixed:: setRowBits(int const row)
{
    this->FixedPoint = row;
} 
int Fixed::getRawBits(void) const
{
    //std ::cout << "getRawBits member function called" << std ::endl;
    return (this->FixedPoint);
}

Fixed &Fixed::operator=(const Fixed &other)
{
    //std ::cout << "Copy assignment operator called" << std::endl;
    this->FixedPoint = other.getRawBits();

    return (*this);
}
Fixed::~Fixed()
{
    //std ::cout << "Destructor called" << std ::endl;
}
std ::ostream &operator<<(std ::ostream &oss, const Fixed &dt)
{
    oss << dt.toFloat();
    return oss;
}
int Fixed::toInt(void) const
{
    return (this->FixedPoint >> this->bits);
}

float Fixed::toFloat(void) const
{
    return ((float)this->FixedPoint / (1 << this->bits));
}

Fixed Fixed::operator++(int)
{
    Fixed number(*this);
    operator++();
    return (number);
}
Fixed Fixed::operator--(int)
{
    Fixed number(*this);
    operator--();
    return (number);
}
Fixed &Fixed::operator++(void)
{
    ++(this->FixedPoint);
    return (*this);
}
Fixed &Fixed::operator--(void)
{
    --(this->FixedPoint);
    return (*this);
}
Fixed Fixed::operator+(const Fixed &src)
{
	Fixed number;
	number.setRowBits(this->FixedPoint + src.FixedPoint);
	return (number);
}
Fixed Fixed::operator-(const Fixed &src)
{
	Fixed number;
   // std :: cout << "                          " <<this->FixedPoint <<std :: endl ; 
	number.setRowBits(this->FixedPoint - src.FixedPoint);
	return (number);
}
Fixed Fixed::operator*(const Fixed &src)
{
	Fixed number;
	number.setRowBits(this->FixedPoint * src.FixedPoint >> this->bits);
	return (number);
}
bool Fixed::operator>( const Fixed &src) const {return (this->FixedPoint > src.getRawBits()? 1 :0);}
bool Fixed::operator<( const Fixed &src) const {return (this->FixedPoint < src.getRawBits()? 1 :0);}
bool Fixed::operator>=( const Fixed &src) const {return (this->FixedPoint >= src.getRawBits()? 1 :0);}
bool Fixed::operator<=( const Fixed &src) const {return (this->FixedPoint<= src.getRawBits()? 1 :0);}
bool Fixed::operator==( const Fixed &src) const {return (this->FixedPoint == src.getRawBits()? 1 :0);}
bool Fixed::operator!=( const Fixed &src) const {return !(this->FixedPoint == src.getRawBits()? 1 :0);}

Fixed & Fixed :: min( Fixed &src, Fixed &tes){return(src < tes ? src : tes);}
const Fixed & Fixed :: min( const Fixed  &src, const Fixed &tes){return(src < tes ? src : tes);}
Fixed & Fixed :: max( Fixed &src, Fixed &tes){return(src > tes ? src : tes);}
const Fixed & Fixed :: max( const Fixed  &src, const Fixed &tes){return(src > tes ? src : tes);}

// Fixed Fixed::operator*(const Fixed &src) 
// {
// 	Fixed rtn;
// 	rtn.setRowBits((this->FixedPoint * src.getRawBits()) >> this->bits);
//     std :: cout << *this << std :: endl ; 
// 	return (rtn);
// }

int main(void)
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
