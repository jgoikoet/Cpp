/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:53:27 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/03/08 18:43:15 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class	Point
{
	private:
		
		const Fixed  _x;
		const Fixed  _y;

	public:
		
		Point(void); //--------------------------------- canonical default constructor
		Point(float const x, float const y);
		Point(Point const & src);	//------------------- canonical copy constructor
		~Point(void);	//------------------------------- canonical destructor
		
		Point &operator=(Point const &rhs);
		
		Fixed	getCorX() const;
		Fixed	getCorY() const;
};

bool bsp( Point const a, Point const  b, Point const  c, Point const  point);

#endif