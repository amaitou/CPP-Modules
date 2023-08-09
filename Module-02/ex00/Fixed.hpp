#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int fractional;
	
	public:
		Fixed();
		Fixed(int value);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed & operator = (const Fixed &object);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
} ;

#endif