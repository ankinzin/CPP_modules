/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:03:22 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/20 15:51:54 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {

        private:
                std::string     _name;

        public:
                Zombie(std::string name);
                ~Zombie();
				void    announce(void);
};
void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif