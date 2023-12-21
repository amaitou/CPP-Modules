/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:55:09 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:55:10 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int value;
		static const int fractional;
	
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed & operator = (const Fixed &object);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;

		bool operator > (const Fixed &object) const;
		bool operator < (const Fixed &object) const;
		bool operator <= (const Fixed &object) const;
		bool operator >= (const Fixed &object) const;
		bool operator == (const Fixed &object) const;
		bool operator != (const Fixed &object) const;

		Fixed operator + (const Fixed &object) const;
		Fixed operator - (const Fixed &object) const;
		Fixed operator * (const Fixed &object) const;
		Fixed operator / (const Fixed &object) const;

		Fixed operator ++ (int);
		Fixed & operator ++ ();
		Fixed operator -- (int);
		Fixed & operator -- ();

		static Fixed & min (Fixed &object1, Fixed &object);
		static Fixed & max (Fixed &object1, Fixed &object);
		static const Fixed & min(const Fixed &object1, const Fixed &object2);
		static const Fixed & max(const Fixed &object1, const Fixed &object2);
} ;

std::ostream& operator<<(std::ostream &os, Fixed const &object);

#endif