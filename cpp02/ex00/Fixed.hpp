/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 16:28:49 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/04 18:22:34 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	private:
	
		int					_value;
		static const int	_fbits = 8;
	
	public:
	
		Fixed(void);
		Fixed(Fixed const & src);
		
		Fixed &	operator=(Fixed const & rhs);
		
		~Fixed(void);
		
		int 	getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif