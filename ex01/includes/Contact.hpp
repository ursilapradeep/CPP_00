/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:57:25 by uvadakku          #+#    #+#             */
/*   Updated: 2026/04/29 18:50:52 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;

	public:
	
	Contact();
	
	void setFirstName(std::string const &firstName);
	void setLastName(std::string const &lastName); 
	void setNickName(std::string const &nickName);
	void setPhoneNumber(std::string const &phoneNumber);
	void setDarkestSecret(std::string const &darkestSecret);
	
	std::string getFirstName()const;
	std::string getLastName()const;
	std::string getNickName()const;
	std::string getPhoneNumber()const;
	std::string getDarkestSecret()const;
};
#endif