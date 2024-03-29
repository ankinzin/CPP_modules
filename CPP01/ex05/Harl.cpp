/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:56:24 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/27 15:10:40 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra beacon costs more money. ";
	std::cout << "you didn't put enough bacon in my burger! ";
	std::cout << "If you did i wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string	level)
{
	void	(Harl::*methods[])(void) = {
			&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (short i = 0; i < 4; i++) {
		if (levels[i] == level)
			(this->*methods[i])();
	}
}