/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:02:08 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/11 10:33:50 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(float const x, float const y) : _x(x), _y(y) {}

Point::Point(Point const &src) : _x (src.getCorX()), _y (src.getCorY()){std::cout <<"copiaaaaaaa" << std::endl;}

Point::~Point(void){}

Point &Point::operator=(Point const &rhs)
{
	//this->_x.setRawBits(rhs._x.getRawBits());
	//this->_y.setRawBits(rhs._y.getRawBits());
	(void)rhs;
	return *this;
}

Fixed	Point::getCorX() const
{
	return _x;
}

Fixed	Point::getCorY() const
{
	return _y;
}