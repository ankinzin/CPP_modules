/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:46:04 by ankinzin          #+#    #+#             */
/*   Updated: 2023/12/05 17:04:53 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class 	Fixed{

		private:
				int _rawBits;
				static const int _frac_bit;

		public:
				Fixed( void );
				Fixed( Fixed const &fixedPoint );
				~Fixed( void );
				Fixed( const int number );
				Fixed (const float number );

				Fixed& 	operator=( Fixed const &fixedPoint );
				int 	getRawBits( void ) const;
				void	setRawBits( int const raw);
				float 	toFloat( void ) const;
				int 	toInt( void ) const;

				bool operator>( Fixed const &fp_2 );
				bool operator<( Fixed const &fp_2 );
				bool operator>=( Fixed const &fp_2 );
				bool operator<=( Fixed const &fp_2 );
				bool operator==( Fixed const &fp_2 );
				bool operator!=( Fixed const &fp_2 );

				Fixed operator+( Fixed const &fp_2 );
				Fixed operator-( Fixed const &fp_2 );
				Fixed operator*( Fixed const &fp_2 );
				Fixed operator/( Fixed const &fp_2 );

				Fixed& operator++( void );
				Fixed operator++( int );
				Fixed& operator--( void );
				Fixed operator--( int );
				static Fixed& min(Fixed& fp, Fixed& fp_2);
				static const Fixed& min(Fixed const &fp, Fixed const &fp_2);
				static Fixed& max(Fixed& fp, Fixed& fp_2);
				static const Fixed& max(Fixed const &fp, Fixed const &fp_2);
};

std::ostream & operator<<(std::ostream & out, const Fixed &fixedPoint);

#endif