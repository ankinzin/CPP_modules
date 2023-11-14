/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:24:28 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/10 17:47:19 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook() {
    this->_index = 0;
    this->_size = 0;
}

void    PhoneBook::add()
{
    std::cout << "\nAdd - New Contact:" << std::endl;
    this->_contacts[this->_index].set_full_info();
    std::cout << "Success!" << std::endl;
    this->_index++;
    this->_size++;
    if (this->_index == 8)
        this->_index = 0;
}

void    PhoneBook::search()
{
    int num;
    std::string input;

    if (this->_size == 0){
        std::cout << "\nNo contact to display\n" << std::endl;
        return ;
    }
    while (true){
        this->search_display(10);
        std::cout << "\nPlease enter index of the contact: ";
        if(!std::getline(std::cin, input)){
            std::cout << "Error on getline" << std::endl;
            break ;
        }
        if (input == "EXIT")
            break ;
        if (input.empty() || !is_number(input)){
            std::cout << std::endl << input << " invalid input, Try again" << std::endl;
            continue;
        }
        num = std::atoi(input.c_str());
        if (num < 0 || num >= this->_size || num > 7)
            std::cout << "\nError: Index out of range, Try again\n" << std::endl;
        else
            this->get_contact(num).get_full_info();
    }
}

void    PhoneBook::search_display(int spc) {
    int     i;

    for(i = 0; (i < this->_size && i < 8); i++){
        std::cout << std::setw(spc) << i << "|";
        std::cout << std::setw(spc) << string_form(get_contact(i).get_first_name()) << "|";
        std::cout << std::setw(spc) << string_form(get_contact(i).get_last_name()) << "|";
        std::cout << std::setw(spc) << string_form(get_contact(i).get_nick_name()) << "|";
        std::cout << std::endl;
    }
}

Contact PhoneBook::get_contact(int index) {
    return (this->_contacts[index]);
}