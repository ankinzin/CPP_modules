/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:24:31 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/22 16:24:31 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

		private:
				std::string	_name;
				Weapon		*_weapon;

		public:
				HumanB(std::string name);
				void	attack(void);
				void	setWeapon(Weapon *weapon);
};

#endif