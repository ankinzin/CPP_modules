/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:04:33 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/28 17:40:30 by ankinzin         ###   ########.fr       */
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

					Fixed& operator=( Fixed const &fixedPoint );
					int getRawBits( void ) const;
					void	setRawBits( int const raw );
};

#endif