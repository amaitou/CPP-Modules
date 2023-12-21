/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:55:34 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:55:35 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed abs(const Fixed param)
{
	if (param < 0)
		return param  * (-1);
	return param;
}

static Fixed area(Point const a, Point const b, Point const c)
{
	Fixed area;

	/*
		Formula of calculating the area of a triangle according to its (y, x):
			abs(a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY()) / 2.0)
	*/
	area = abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
	return area;
}

static bool is_in(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc = area(a, b, c);
	Fixed pbc = area(point, b, c);
	Fixed pac = area(a, point, c);
	Fixed pab = area(a, b, point);
	return ((abc == pbc + pac + pab) && (pbc > 0 && pac > 0 && pab > 0));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	return is_in(a, b, c, point);
}
