#pragma once

class Fixed
{
	private:
		int fixed_point_number;
		static const int fractional; 
	public:
		Fixed();
		Fixed( const Fixed& obj );
		Fixed& operator=( const Fixed& obj );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};