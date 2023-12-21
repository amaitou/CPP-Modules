/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:55:53 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:55:54 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0)
{
	std::cout << "Point constructor has been called" << std::endl;
}

Point::Point(const float x, const float y): x(x), y(y)
{
}
Point::Point(const Point &copy): x(copy.x), y(copy.y)
{
}

Point &Point::operator = (const Point &object)
{
	(Fixed)x = object.x;
	(Fixed)y = object.y;
	return *this;
}

Point::~Point() {}

Fixed Point::getX(void) const
{
	return this->x;
}

Fixed Point::getY(void) const
{
	return this->y;
}