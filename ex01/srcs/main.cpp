/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:01:04 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/04 14:41:18 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static std::string getField(std::string const &prompt)
{
	std::string input;
	while(true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!input.empty())
			return (input);
		std::cout << "Field cannot be empty." << std::endl;
	}
}

static bool isValidPhoneNumber(const std::string& input) 
{
	if (input.empty()) 
		return (false);
	size_t start;
	size_t digits;
	
	start = 0;
	if (input[0] == '+') 
		start = 1;
	digits = 0;
	for (size_t i = start; i < input.length(); ++i) 
	{
		if (!isdigit(input[i]))
		 return (false);
		digits++;
	}
	return (digits == 10 || digits == 11);
}

static void Add(PhoneBook &pb)
{
	Contact c;
	std::string input;
	
	c.setFirstName(getField("First name :"));
	c.setLastName(getField("Last name :"));
	c.setNickName(getField("Nickname :"));
	while (true)
	{
		std::cout << "Phone Number: ";
		std::getline(std::cin, input);
		if (isValidPhoneNumber(input))
		{
			c.setPhoneNumber(input);
			break ;
		}
		std::cout << "Invalid phone number. Please enter again." << std::endl;
	}
	c.setDarkestSecret(getField("Darkest secret :"));
	pb.addContact(c);
	std::cout << "Contact added" << std::endl;
}

static void Search(PhoneBook &pb)
{
	int idx;
	
	if (pb.getCount() == 0)
	{
		std::cout << "Phone Book is empty." << std::endl;
		return ;
	}
	pb.searchAll();
	
	std::string input;
	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	idx = input[0] - '0';
	if (input.length() != 1 || idx < 0 || idx >= pb.getCount())
	{
		std::cout << "invalid index "<< std :: endl;
		return ;
	}
	pb.searchOne(input[0] - '0');
}

int main()
{
	PhoneBook pb;
	std::string cmd;

	while (true)
	{
		std::cout << "Enter Command(ADD, SEARCH, EXIT):";
		if (!std::getline(std::cin, cmd))
			break ;
		if (cmd == "ADD")
			Add(pb);
		else if (cmd == "SEARCH")
		 Search(pb);
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "unknown command" << std::endl;
	}
	return (0);
}
