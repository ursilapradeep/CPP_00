/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 17:22:24 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/05 17:35:32 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <iomanip> 
#include <ctime> 
#include "Account.hpp" 

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit):_amount(initial_deposit),_nbDeposits(0),_nbWithdrawals(0)
{
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

//Destructor-->cleans object resources
Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

//static methods-->whole class
int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "Accounts:" << Account::_nbAccounts
    << ";total:" << Account::_totalAmount
    << ";deposits:" << Account::_totalNbDeposits
    << ";withdrawals" << Account::_totalNbWithdrawals << std::endl;
}

//eg: [2024  01->month  01->Day  _  12 hrs  34min  56 sec]
void Account::_displayTimestamp(void)
{
    time_t now;
    struct tm *timeinfo;
    char buffer[20];

    now = time(NULL);
    timeinfo = localtime(&now);
    strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
    std::cout << buffer;
}

void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
    << ";p_amount:" << this->_amount 
    << ";deposit:"<< deposit 
    << ";amount:"<< this->_amount + deposit 
    << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex 
    << ";p_amount:" << this->_amount
    << ";withdrawal:";
    if (this->_amount >= withdrawal)
    {
        std::cout << withdrawal
        << ";amount:"<< this->_amount - withdrawal 
        << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        return (true);
    } 
    else
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
}

int Account::checkAmount ( void ) const
{
    return this->_amount;
}

void Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
    << ";amount:" << this->_amount  
    << ";deposits:" << this->_nbDeposits  
    << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
