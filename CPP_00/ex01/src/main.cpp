/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:18:45 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/06 15:33:00 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"
#include "../includes/PhoneBook.hpp"

int main(int argc, char **argv)
{
    std::string input;
    PhoneBook   phone;

    (void)argc;
    (void)argv;
    std::cout << "++++ Phonebook++ Version 0.0 ++++\n" << std::endl;
    while (true){
        std::cout << "Commands: ADD | SEARCH | EXIT\n" << std::endl;
        std::cout << "Enter a valid command: ";
        if (!std::getline(std::cin, input)) {
            std::cout << "Error getline\n";
            exit(1);
        }
        if (input == "EXIT") {
            std::cout << "Exiting Phonebook" << std::endl;
            break ;
        }
        if (input == "ADD")
            phone.add();
        else if (input == "SEARCH")
            phone.search();
        else
            std::cout << "Error: " << input << "is an invalid cmd, try again\n" << std::endl;
    }
    return (0);
}