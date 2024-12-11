/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:07:30 by jgoikoet          #+#    #+#             */
/*   Updated: 2024/01/09 11:38:19 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}
Fixed::Fixed(int const i)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = i * (1 << this->_fbits);
}

Fixed::Fixed(float const f)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = static_cast<int>(roundf(f * (1 << this->_fbits)));
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}


float	Fixed::toFloat( void ) const
{
	return(static_cast<float>(this->_value) / (1 << this->_fbits));
}

int	Fixed::toInt( void ) const
{
	return(this->_value / (1 << this->_fbits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & i)
{
	o <<  i.toFloat();

	return o;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
	//std::cout << "Copy assigment operator called" << std::endl;
	this->_value = rhs._value;
		
	return *this;
}


//ARITHMETIC OPERATORS----------------------------------

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	Fixed	temp;
	
	temp._value = this->_value + rhs._value;
	return (temp);
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	Fixed	temp;
	
	temp._value = this->_value - rhs._value;
	return (temp);
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	Fixed	temp;
	
	temp._value = static_cast<int>(roundf((this->toFloat() * rhs.toFloat()) * (1 << _fbits)));
	return (temp);
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	Fixed	temp;
	
	temp._value = static_cast<int>(roundf((this->toFloat() / rhs.toFloat()) * (1 << _fbits)));;
	return (temp);
}
//-------------------------------------------------------

//INCREMENT-DECREMENT OPERATORS--------------------------
Fixed & Fixed::operator++()
{
	++this->_value;
	return(*this);
}
Fixed  Fixed::operator++(int)
{
	Fixed temp(*this);
	
	this->_value++;
	return(temp);
}
Fixed & Fixed::operator--()
{
	--this->_value;
	return(*this);
}
Fixed  Fixed::operator--(int)
{
	Fixed temp(*this);
	
	this->_value--;
	return(temp);
}
//---------------------------------------------------------

//COMPARISON OPERATORS--------------------------------------
bool	Fixed::operator >(const	Fixed & rhs)
{
	//std::cout <<"arresultao: " << (this->_value > rhs._value) << std::endl;
	return (this->_value > rhs._value);
}

bool	Fixed::operator <(const	Fixed & rhs)
{
	return (this->_value < rhs._value);
}

bool	Fixed::operator >=(const	Fixed & rhs)
{
	return (this->_value >= rhs._value);
}

bool	Fixed::operator <=(const	Fixed & rhs)
{
	return (this->_value <= rhs._value);
}

bool	Fixed::operator ==(const	Fixed & rhs)
{
	return (this->_value == rhs._value);
}

bool	Fixed::operator !=(const	Fixed & rhs)
{
	return (this->_value != rhs._value);
}
//---------------------------------------

const Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

int	Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void	Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}