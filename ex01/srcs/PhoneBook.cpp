/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:45:43 by uvadakku          #+#    #+#             */
/*   Updated: 2026/04/30 15:17:56 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : _count(0), _oldest(0) {} 

void PhoneBook::addContact(Contact const &contact)
{
	_contacts[_oldest] = contact;
	_oldest = (_oldest + 1) % 8;
	if (_count < 8)
	_count++; 
}

static std::string truncate(std::string const &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}
void PhoneBook::searchAll()const
{
	std::cout << std::setw(10) << "Index" << "|"
	<< std::setw(10) << "First Name" << "|"
	<< std::setw(10) << "Last Name" << "|"
	<< std::setw(10) << "Nick Name" << std :: endl;
	for (int i = 0; i < _count; i++)
	{
		std::cout << std::setw(10) << i << "|"
		<< std::setw(10) << truncate(_contacts[i].getFirstName()) << "|"
		<< std::setw(10) << truncate(_contacts[i].getLastName()) << "|"
		<< std::setw(10) << truncate(_contacts[i].getNickName()) << std::endl;
	}
}

void PhoneBook::searchOne(int index)const
{
	if (index < 0 || index >= _count)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	std::cout << "FirstName : " << _contacts[index].getFirstName() << std::endl;
	std::cout << "LastName : " << _contacts[index].getLastName() << std::endl;
	std::cout << "NickName : " << _contacts[index].getNickName() << std::endl;
	std::cout << "Phone number : " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "darkestSecret : " << _contacts[index].getPhoneNumber() << std::endl;
}

int PhoneBook::getCount() const {return _count; }
