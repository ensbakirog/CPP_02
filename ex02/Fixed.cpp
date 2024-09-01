#include "Fixed.hpp"

// Default Constructor

Fixed::Fixed() : _fixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
}

// Constructor int and float

Fixed::Fixed( const int number ) {
	std::cout << "Int constructor called" << std::endl;

	this->setRawBits((number << this->_fractionalBits));
}

Fixed::Fixed( const float number ) {
	std::cout << "Float constructor called" << std::endl;

	this->setRawBits(roundf(number * (1 << this->_fractionalBits)));
}

// Copy Constructor

Fixed::Fixed( const Fixed& obj ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

// Copy assigment operator

Fixed& Fixed::operator=( const Fixed& obj ) {
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &obj)
		this->setRawBits(obj.getRawBits());
	return *this;
}

// Destructor

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// Convert to int and to float

int Fixed::toInt( void ) const {
	return (this->getRawBits() / (1 << this->_fractionalBits));
}


float Fixed::toFloat( void ) const {
	return (float)(this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

// Getter&Setter

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

// Comparison Operators

bool Fixed::operator<( const Fixed& obj ) const {
	return ((this->getRawBits() < obj.getRawBits()) ? true : false);
}

bool Fixed::operator>( const Fixed& obj ) const {
	return ((this->getRawBits() > obj.getRawBits()) ? true : false);
}

bool Fixed::operator>=( const Fixed& obj ) const {
	return ((this->getRawBits() >= obj.getRawBits()) ? true : false);
}

bool Fixed::operator<=( const Fixed& obj ) const {
	return ((this->getRawBits() <= obj.getRawBits()) ? true : false);
}

bool Fixed::operator==( const Fixed& obj ) const {
	return ((this->getRawBits() == obj.getRawBits()) ? true : false);
}

bool Fixed::operator!=( const Fixed& obj ) const {
	return ((this->getRawBits() != obj.getRawBits()) ? true : false);
}

// Arithmetic Operators

Fixed Fixed::operator+( const Fixed& obj ) const {
	Fixed Result;

	Result.setRawBits(this->getRawBits() + obj.getRawBits());

	return Result;
}

Fixed Fixed::operator-( const Fixed& obj ) const {
	Fixed Result;

	Result.setRawBits(this->getRawBits() - obj.getRawBits());

	return Result;
}

Fixed Fixed::operator*( const Fixed& obj ) const {
	Fixed Result;

	Result.setRawBits(this->getRawBits() * obj.getRawBits());

	return Result;
}

Fixed Fixed::operator/( const Fixed& obj ) const {
	Fixed Result;

	Result.setRawBits(this->getRawBits() / obj.getRawBits());

	return Result;
}

Fixed& Fixed::operator++( void ) const {
	this->setRawBits(this->getRawBits() + 1);
}