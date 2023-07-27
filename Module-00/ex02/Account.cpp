
#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

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
	return Account::_totalNbDeposits;
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	std::cout << "index" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
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
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amout:" << this->_amount - deposit << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amout:" << this->_amount << ";";
	std::cout << "nb_deposits" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
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
	// index:0;amount:42;deposits:0;withdrawals:0
	std::cout << "index" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals" << this->_nbWithdrawals << std::endl;
}

Account::Account(void) {}