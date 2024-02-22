/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:05:43 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/21 17:13:52 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {

		private:
			std::string     _name;

		public:
			~Zombie();
			void	setName(std::string name);
			void    announce(void);
};

Zombie*		zombieHorde(int N, std::string name);

#endif