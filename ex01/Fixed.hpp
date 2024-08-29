#pragma once

class Fixed
{
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8; 
	public:
		Fixed();
		Fixed( const Fixed& obj );
		Fixed( const int raw );
		Fixed( const float raw );
		Fixed& operator=( const Fixed& obj );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		int toInt( void ) const;
		float toFloat( void ) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &f);