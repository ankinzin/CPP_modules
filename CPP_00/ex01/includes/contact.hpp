/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:22:05 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/14 16:11:17 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "./Header.hpp"

class Contact {

        private:
                std::string     _first_name;
                std::string     _last_name;
                std::string     _nick_name;
                std::string     _phone_number;
                std::string     _darkest_secret;

        public:
                std::string     get_first_name(void);
                std::string     get_last_name(void);
                std::string     get_nick_name(void);
                std::string     get_phone_number(void);
                std::string     get_darkest_secret(void);
                void            get_full_info(void); //search method
                void            set_full_info(void); //add method
};

#endif
