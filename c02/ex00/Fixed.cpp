#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std :: endl;
    this->FixedPoint = 0;
}

Fixed :: Fixed( Fixed &src)
{
    std :: cout << "Copy constructor called" << std :: endl;
    this->FixedPoint =  src.getRawBits();
}

int Fixed::getRawBits( void ) const
{
    std :: cout << "getRawBits member function called" << std :: endl;
    return(this->FixedPoint);
}

void Fixed:: setRowBits(int const row)
{
    this->FixedPoint = row;
} 

Fixed & Fixed::operator=(const Fixed & other)
{
    std :: cout << "Copy assignment operator called" << std:: endl;
   this->FixedPoint = other.getRawBits();
   Fixed a(*this);
    return a;
}
Fixed::~Fixed()
{
    std :: cout << "Destructor called" << std :: endl;
}

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}

