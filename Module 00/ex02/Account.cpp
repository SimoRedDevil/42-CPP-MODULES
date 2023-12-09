/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:55:05 by mel-yous          #+#    #+#             */
/*   Updated: 2023/12/08 10:55:06 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iomanip>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;
    _totalAmount += _amount;
    _nbAccounts++;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:"
        << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex
        << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t currTime = std::time(NULL);
    std::tm* localTime = std::localtime(&currTime);
    int year = localTime->tm_year + 1900;
    int month = localTime->tm_mon + 1;
    int day = localTime->tm_mday;
    int hour = localTime->tm_hour;
    int minute = localTime->tm_min;
    int second = localTime->tm_sec;
    std::cout << "[" << year << std::setw(2) << std::setfill('0') << month
        << std::setw(2) << std::setfill('0') << day << "_"
        << std::setw(2) << std::setfill('0') << hour << std::setw(2)
        << std::setfill('0') << minute << std::setw(2)
        << std::setfill('0') << second << "]";
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount
        << ";deposits:" << _totalNbDeposits << ";withdrawals:"
        << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
    if (withdrawal <= _amount)
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";withdrawal:" << withdrawal << ";amount:"
            << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return (true);
    }
    std::cout << ";withdrawal:refused" << std::endl;
    return (false);
}

int Account::checkAmount(void) const
{
    return (_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:"
        << _amount << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals << std::endl;
}