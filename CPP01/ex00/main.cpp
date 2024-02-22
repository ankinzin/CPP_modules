/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:03:22 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/20 15:51:54 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char**argv)
{
	int		i;
	Zombie	*zombie_ptr;

	if (argc==1)
	{
		std::cout << "Insert at least a zombie name :)" << std::endl;
		return (0);
	}
	i = 0;
	while (argv[++i])
	{
		std::string	zombie_name(argv[i]);
		std::cout << "\x1B[33mThis is a Zombie\x1B[0m" << std::endl;
		randomChump(zombie_name);
		std::cout << "\n\x1B[33mThis is a Heap Zombie\x1B[0m" << std::endl;
		zombie_ptr = newZombie(zombie_name);
		zombie_ptr->announce();
		delete (zombie_ptr);
	}
	return (0);
}