/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:22:25 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/06 15:23:01 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

std::string     get_check_input(std::string input);
std::string     string_form(std::string str);
bool            is_number(std::string str);
#endif