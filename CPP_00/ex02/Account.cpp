#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() 
{

}

Account::Account(int initial_deposite)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposite;
	Account::_totalAmount += _amount;
	_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << checkAmount() << ";" << "created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << checkAmount() << ";" << "closed\n";
}

int Account::getNbAccounts()
{
	return(_nbAccounts);
}

int Account::getTotalAmount()
{
	return(_totalAmount);
}

int Account::getNbDeposits()
{
	return(_totalNbDeposits);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

int Account::getNbWithdrawals()
{
	return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" << "total:" << getTotalAmount() << ";" << "deposits:" << getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << "\n";
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << checkAmount() << ";" << "deposit:" << deposit << ";";
	_amount += deposit;
	_nbDeposits++;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << "amount:" << checkAmount() << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << checkAmount() << ";";
	if (checkAmount() < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";" << "amount:" << checkAmount() << ";" << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}


void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << checkAmount() << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t now = std::time(NULL);
	struct tm timenow = *std::localtime(&now);

	std::cout << "[" << timenow.tm_year + 1900 << std::setfill('0') << std::setw(2) << timenow.tm_mon + 1 << std::setfill('0') << std::setw(2) << timenow.tm_mday << "_" << std::setfill('0') << std::setw(2) << timenow.tm_hour << std::setfill('0') << std::setw(2) << timenow.tm_min << std::setfill('0') << std::setw(2) << timenow.tm_sec << "] ";
}
