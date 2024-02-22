/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:15:42 by ankinzin          #+#    #+#             */
/*   Updated: 2023/12/04 14:29:44 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed:: _frac_bit = 8;

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed( Fixed const &fixedPoint ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedPoint;
}

Fixed& Fixed::operator=( Fixed const &fixedPoint) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = fixedPoint.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const {
	return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {
	this->_rawBits = raw;
}

Fixed::~Fixed ( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int number ) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = number << this->_frac_bit;
}

Fixed::Fixed( const float number) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(number * (1 << this->_frac_bit));
}

float Fixed::toFloat( void ) const {
	return (float)this->_rawBits / (float) (1 << this->_frac_bit);
}

int Fixed::toInt ( void ) const
{
	return this->_rawBits >> this->_frac_bit;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixedPoint)
{
	out << fixedPoint.toFloat();
	return (out);
}