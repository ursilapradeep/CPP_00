/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:17:04 by uvadakku          #+#    #+#             */
/*   Updated: 2026/04/29 06:26:27 by uvadakku         ###   ########.fr       */
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
			//std::cout<< str;
			//std::cout<<" ";
			for (size_t j = 0; j < str.length(); j++)
			{
				str[j]=std :: toupper(str[j]);
				std :: cout << str[j];
			}
			std::cout<<" ";
		}
		std::cout << std::endl;
	}
	return 0;
}
