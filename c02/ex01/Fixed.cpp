#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std :: endl;
    this->FixedPoint = 0;
}

Fixed::Fixed( const int number )
{
	std::cout << "Int constructor called" << std::endl;
	this->FixedPoint = number << this->bits;
}


Fixed::Fixed( const Fixed &src )
{
	std::cout << "Copy constructor called" << std::endl;
	this->FixedPoint = src.getRawBits();
}

Fixed::Fixed( const float number )
{
   
	 std::cout << "Float constructor called" << std::endl;
    //std:: cout << "<<<<<>>>>>>> :" << this->FixedPoint << std :: endl;
	this->FixedPoint = (int)(roundf(number * (1 << this->bits)));
   // std:: cout << ">>>>>>> :" << this->FixedPoint << std :: endl;
}


int Fixed::getRawBits( void ) const
{
    std :: cout << "getRawBits member function called" << std :: endl;
    //std :: cout << "Copy assignment operator called" << std:: endl;
    return(this->FixedPoint);
}



Fixed & Fixed::operator=(const Fixed & other)
{
    std :: cout << "Copy assignment operator called" << std:: endl;
    this->FixedPoint = other.getRawBits();

    return (*this);
}
Fixed::~Fixed()
{
    std :: cout << "Destructor called" << std :: endl;
}


std ::ostream& operator<<(std ::ostream& oss, const Fixed &dt)
{
    oss << dt.toFloat();
    return oss;
}
float Fixed::toFloat( void ) const
{
    return((float)this->FixedPoint / (1 << this->bits));
}
int Fixed::toInt( void ) const
{
    return(this->FixedPoint >> this->bits);
}


int main( void ) {
Fixed a;
Fixed const b( 10 );
a = a.operator=(b);
// Fixed const c( 42.42f );
//Fixed const c;
// Fixed const d( b );
// a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}

