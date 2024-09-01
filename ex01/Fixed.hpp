#pragma once

#include <iostream>

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8; 
	public:
		Fixed();
		Fixed( int number );
		Fixed( const float number );
		Fixed( const Fixed& obj );
		Fixed& operator=( const Fixed& obj );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		int toInt( void ) const;
		float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& _fixed);