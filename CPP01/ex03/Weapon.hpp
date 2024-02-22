/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:24:31 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/22 18:00:53 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include "iostream"

class Weapon {

			private:
					std::string	_type;

			public:
					Weapon(std::string type);
					std::string	getType(void);
					void		setType(std::string type);
};

#endif