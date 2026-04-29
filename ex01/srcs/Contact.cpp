/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:41:10 by uvadakku          #+#    #+#             */
/*   Updated: 2026/04/29 18:45:45 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(){}

void Contact::setFirstName(std::string const &firstName) {_firstName = firstName;}
void Contact::setLastName(std::string const &lastName){_lastName = lastName;}
void Contact::setNickName(std::string const &nickName) {_nickName = nickName;}
void Contact::setPhoneNumber(std::string const &phoneNumber){_phoneNumber = phoneNumber;}
void Contact::setDarkestSecret(std::string const &darkestSecret){_darkestSecret = darkestSecret;}

std::string Contact::getFirstName() const { return _firstName; } 
std::string Contact::getLastName() const { return _lastName; } 
std::string Contact::getNickName() const { return _nickName; } 
std::string Contact::getPhoneNumber() const { return _phoneNumber; } 
std::string Contact::getDarkestSecret() const { return _darkestSecret; } 



