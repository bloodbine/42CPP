/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:22:47 by gpasztor          #+#    #+#             */
/*   Updated: 2023/10/23 14:31:31 by gpasztor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstddef>
#include <fstream>
#include <iostream>
#include <ostream>

void	string_replace(std::string&	string, std::string toreplace, std::string replacewith)
{
	std::size_t	pos = string.find(toreplace);
	while (pos != std::string::npos)
	{
		string.erase(pos, toreplace.length());
		string.insert(pos, replacewith);
		pos += replacewith.length();
		pos = string.find(toreplace, pos);
	}
};

int	main(int argc, char **argv)
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		line;
	std::string		filename;
	std::string		toreplace;
	std::string		replacewith;

	if (argc != 4\
	|| (!argv[1] || std::strlen(argv[1]) == 0)\
	|| (!argv[2] || std::strlen(argv[2]) == 0)\
	|| (!argv[3] || std::strlen(argv[3]) == 0))
	{
		std::cerr << "Error: Invalid arguments. Example: ./Sed 'testfile.txt' 'toreplace' 'replacewith'" << std::endl;
		return (1);
	}

	filename = argv[1];
	toreplace = argv[2];
	replacewith = argv[3];

	input.open(filename, std::ios::in);
	if (!input)
	{
		std::cerr << "Failed to open input file" << std::endl;
		return (1);
	}

	output.open((filename + ".replace"), std::ios::out | std::ios::trunc);
	if (!output)
	{
		std::cerr << "Failed to open output file" << std::endl;
		return (1);
	}

	while (input.eof() == false)
	{
		std::getline(input, line);
		if (input.bad() == true)
		{
			std::cerr << "An error occured while reading from the input file" << std::endl;
			return (1);
		}
		std::string& stringREF = line;
		string_replace(stringREF, toreplace, replacewith);
		if (input.eof() == false)
			output << line << std::endl;
		else
			output << line;
	}

	input.close();
	output.close();
	return (0);
};
