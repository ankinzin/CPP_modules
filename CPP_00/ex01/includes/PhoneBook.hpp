/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:24:14 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/14 16:11:30 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./Contact.hpp"
# include "./Header.hpp"

class   PhoneBook {
            private:
                    int			_index;
                    int			_size;
                    Contact     _contacts[8];

            public:
                    PhoneBook(void);
                    void    add(void);
                    void    search(void);
                    void    search_display(int spc);
                    Contact get_contact(int index);
};

#endif
