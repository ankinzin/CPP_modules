/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:05:43 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/21 17:35:42 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	int		i;
	int		num;
	Zombie	*horde;

	num = (argc  - 1);
	if (!num)
	{
		std::cout << "Create at least one ZOMBIE :)" << std::endl;
		return (0);
	}
	i = 0;
	horde = zombieHorde(num, "generic");
	while (argv[i + 1])
	{
		std::string	name(argv[i + 1]);
		horde[i].setName(name);
		horde[i].announce();
		i++;
	}
	delete [] horde;
}
