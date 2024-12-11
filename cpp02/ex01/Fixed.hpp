/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:28:49 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/08 11:40:51 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
	private:
	
		int					_value;
		static const int	_fbits = 8;
	
	public:
	
		Fixed(void);
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const & src);
		
		Fixed &	operator=(Fixed const & rhs);
		
		~Fixed(void);
		
		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);

#endif