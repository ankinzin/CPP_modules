/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:04:33 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/28 17:46:23 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac_bit = 8;

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}

Fixed::Fixed( Fixed const &fixedPoint ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedPoint;
}

Fixed&	Fixed::operator=( Fixed const &fixedPoint ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = fixedPoint.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor Called" << std::endl;
}