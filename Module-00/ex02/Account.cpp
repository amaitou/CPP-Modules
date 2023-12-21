/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:49:45 by amait-ou          #+#    #+#             */
/*   Updated: 2023/12/21 00:49:46 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}
int Account::getTotalAmount(void)
{
	return _totalAmount;
}

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbDeposits;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_displayTimestamp();
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	std::cout << "index" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amout:" << this->_amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amout:" << this->_amount << ";";
	std::cout << "nb_deposits" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amout:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << '\n';
		return false;
	}
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amout:" << this->_amount + withdrawal << ";";
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals" << this->_nbWithdrawals << std::endl;
	return true;
}

int	Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp(void){
    std::time_t t = std::time(0);
    std::tm* current = std::localtime(&t);
    std::cout << "[" << current->tm_year + 1900 << current->tm_mon + 1 << current->tm_mday << "_" << current->tm_hour << current->tm_min << current->tm_sec << "] ";
};

Account::Account(void) {}