/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:15:42 by ankinzin          #+#    #+#             */
/*   Updated: 2023/12/04 14:15:42 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{

		private:
				int _rawBits;
				static const int _frac_bit;

		public:
				Fixed( void );
				Fixed( Fixed const &fixedPoint );
				~Fixed( void );
				Fixed( const int number );
				Fixed( const float number );

				Fixed& operator=( Fixed const &fixedPoint );
				int 	getRawBits( void ) const;
				void	setRawBits( int const raw );
				float 	toFloat( void ) const;
				int 	toInt( void ) const;
};

std::ostream& operator<<(std::ostream & out, const Fixed &fixedPoint );

#endif