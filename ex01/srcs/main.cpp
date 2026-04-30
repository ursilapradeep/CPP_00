/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:01:04 by uvadakku          #+#    #+#             */
/*   Updated: 2026/04/30 15:13:03 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

// std::string cmd;

// while (true)
// {
// 	std::cout << "Enter Command(ADD, SEARCH, EXIT):";
// 	if (!std::getline(std::cin, cmd))
// 		break ;
// 	if (cmd == "ADD")
// 		std::cout << "ADD not implemented yet" << std::endl;
// 	else if (cmd == "SEARCH")
// 		std::cout << "SEARCH not implemented yet" << std::endl;
// 	else if (cmd == "EXIT")
// 		break;
// 	else
// 		std::cout << "unknown command" << std::endl;
// }
// return (0);


int main()
{
	Contact c;
	PhoneBook pb;

	for (int i = 0; i < 9; i++)
	{
		std::stringstream ss;
		ss << i;
		c.setFirstName("Name" + ss.str());
		c.setLastName("Last");
		c.setNickName("Nickname");
		c.setPhoneNumber("000");
		c.setDarkestSecret("Secret");
		pb.addContact(c);
	}
	pb.searchAll();
	return 0;
}

