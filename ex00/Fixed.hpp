#pragma once

class Fixed
{
	private:
		int fixed_point;
		static const int fractional = 8; 
	public:
		Fixed();
		Fixed( const Fixed& obj );
		Fixed& operator=( const Fixed& obj );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};