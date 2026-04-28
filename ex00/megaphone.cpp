/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:17:04 by uvadakku          #+#    #+#             */
/*   Updated: 2026/04/28 15:43:26 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
			std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISES *" << std :: endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std :: string str = argv[i];
			for (size_t j = 0; j < str.length(); j++)
			{
				std :: cout << std :: toupper(str[j]);
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
