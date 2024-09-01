#pragma once

#include <iostream>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8; 
	public:

		// Orthodox Conanical Form

		Fixed();
		Fixed( int number );
		Fixed( const float number );
		Fixed( const Fixed& obj );
		Fixed& operator=( const Fixed& obj );
		~Fixed();

		// Comparison Operators

		bool operator<( const Fixed& obj ) const;
		bool operator>( const Fixed& obj ) const;
		bool operator>=( const Fixed& obj ) const;
		bool operator<=( const Fixed& obj ) const;
		bool operator==( const Fixed& obj ) const;
		bool operator!=( const Fixed& obj ) const;
		
		Fixed Fixed::operator+( const Fixed& obj ) const;

		// Getter&Setter

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		// Convert to int and float

		int toInt( void ) const;
		float toFloat( void ) const;

		// Arithmetic operators

		Fixed operator+( const Fixed& obj ) const;
		Fixed Fixed::operator-( const Fixed& obj ) const;
		Fixed Fixed::operator*( const Fixed& obj ) const;
		Fixed Fixed::operator/( const Fixed& obj ) const;

		Fixed& operator++( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& _fixed);