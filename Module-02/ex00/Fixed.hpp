/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:54:28 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:54:29 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed & operator = (const Fixed &object);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
} ;

#endif