#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed& obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::Fixed(const int raw) {
	this->_fixedPointValue = raw << this->_fractionalBits;
}

Fixed::Fixed(const float raw) {
	this->_fixedPointValue = roundf(raw * (1 << this->_fractionalBits));
}

Fixed& Fixed::operator=( const Fixed& obj ) {
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj)
		this->_fixedPointValue = obj.getRawBits();
	return *this;
}

int Fixed::toInt( void ) const {
	return (this->_fixedPointValue >> this->_fractionalBits;
}

float Fixed::toFloat( void ) const {
	return this->_fixedPointValue / (1 << this->_fractionalBits);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}