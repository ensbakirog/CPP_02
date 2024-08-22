#include "Fixed.hpp"
#include <iostream>

const int Fixed::fractional = 8;

Fixed::Fixed(){
	this->fixed_point_number = 0;

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& obj ) {
	this->fixed_point_number = obj.fixed_point_number;

	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=( const Fixed& obj ) {
	if (this != &obj)
		this->fixed_point_number = obj.fixed_point_number;
	return *this;

	std::cout << "Copy assignment operator called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits( int const raw ) {
}