/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:01:04 by uvadakku          #+#    #+#             */
/*   Updated: 2026/04/29 18:48:27 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

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

	c.setFirstName("John");
	c.setLastName("Doe");
	c.setNickName("Jd");
	c.setPhoneNumber("1245357684");
	c.setDarkestSecret("afraid of AI");

	std::cout << c.getFirstName() << std::endl;
	std::cout << c.getLastName() << std::endl;
	std::cout << c.getNickName() << std::endl;
	std::cout << c.getPhoneNumber() << std::endl;
	std::cout << c.getDarkestSecret() << std::endl;
	return 0;
}

