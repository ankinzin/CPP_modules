/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:21:22 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/06 15:21:24 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; i < argc; ++i) {
		char *currentArg = argv[i];

		for (int j = 0; currentArg[j]; ++j) {
			currentArg[j] = std::toupper(currentArg[j]);
			std::cout << currentArg[j];
		}

		if (i < argc - 1) {
			std::cout << " ";
		}
	}

	std::cout << std::endl;

	return 0;
}


