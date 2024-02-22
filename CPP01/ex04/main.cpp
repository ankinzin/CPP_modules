/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:05:36 by ankinzin          #+#    #+#             */
/*   Updated: 2023/11/24 17:24:39 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	if (argv[2][0] == '\0')
	{
		std::cout << "Empty string" << std::endl;
		return (0);
	}
	int				changes;
	std::string		content;
	std::ifstream	file_in;
	std::ofstream	file_out;
	const char 		*ptr_filein;
	const char 		*ptr_fileout;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	ptr_filein = argv[1];
	std::string	str_filein = ptr_filein;
	std::string	str_fileout = str_filein + ".replace";
	ptr_fileout = str_fileout.c_str();

	file_in.open(ptr_filein);
	file_out.open(ptr_fileout);
	if (!file_in.is_open() || !file_out.is_open())
	{
		if (file_in.is_open())
			file_in.close();
		if (file_out.is_open())
			file_out.close();
		std::cout << "Error while opening the files" << std::endl;
		return (1);
	}
	changes = 0;
	while (getline(file_in, content)) {
		if (content.find(s1) != std::string::npos) {
			size_t	pos;

			pos = 0;
			while (true) {
				pos = content.find(s1, pos);
				if (pos == std::string::npos)
					break ;
				changes++;
				content.erase(pos, s1.size());
				content.insert(pos, s2);
				pos += s2.length();
			}
		}
		file_out << content;
		std::cout << content << std::endl;
	}
	std::cout << changes << " text modified" << std::endl;
	file_in.close();
	file_out.close();
	return (0);
}