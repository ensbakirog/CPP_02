#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const int number ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = (number << this->_fractionalBits);
}

int Fixed::toInt( void ) const {
	return this->_fixedPointValue / (1 << this->_fractionalBits);
}

Fixed::Fixed( const float number ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(number * (1 << this->_fractionalBits));
}

float Fixed::toFloat( void ) const {
	return (float)(this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

Fixed::Fixed( const Fixed& obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator=( const Fixed& obj ) {
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj)
		this->_fixedPointValue = obj._fixedPointValue;
	return *this;
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

std::ostream& operator<<(std::ostream& os, const Fixed& _fixed) {
	os << _fixed.toFloat();
	return os;
}