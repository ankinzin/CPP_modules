/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:56:24 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/27 15:13:42 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void){
	Harl	obj;

	std::cout << std::endl;
	std::cout << "------: HARL :------" << std::endl;
	obj.complain("DEBUG");
	std::cout << std::endl;
	obj.complain("INFO");
	std::cout << std::endl;
	obj.complain("WARNING");
	std::cout << std::endl;
	obj.complain("ERROR");
	std::cout << std::endl;
	return (0);
}