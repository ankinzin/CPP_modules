/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:24:30 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/07 17:31:23 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.hpp"

std::string get_check_input(std::string str)
{
    std::string input;

    do{
        std::cout << str;
        if (!std::getline(std::cin, input)) {
            std::cout << "Error getline\n";
            exit (1);
        }
    } while (input.empty());
    return (input);
}

bool    is_number(std::string str)
{
    size_t  i;

    for (i = 0; i < str.size(); i++){
        if (str[i] < '0' || str[i] > '9')
            return (false);
    }
    return (true);
}

std::string string_form(std::string str)
{
    std::string format;
    if (str.length() <= 9)
        return (str);
    else
    {
        format = str.substr(0, 9).append(".");
        return (format);
    }
}