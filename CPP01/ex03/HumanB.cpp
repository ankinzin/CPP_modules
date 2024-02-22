/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:24:31 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/22 16:24:31 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->_name = name;
	this->_weapon = NULL;
}

void	HumanB::attack(void) {
	if (!this->_weapon)
	{
		std::cout << this->_name << " attacks with his fists " << std::endl;
		return;
	}
	std::cout << this->_name << "attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}