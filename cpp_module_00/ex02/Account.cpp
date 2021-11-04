#include <ctime>
#include <iostream>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

// Constructor with initial_deposit
Account::Account( int initial_deposit ) {
	_totalAmount += initial_deposit;

	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;
}

// Constructor without initial_deposit
Account::Account( void ) {
	_accountIndex = _nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
}

void Account::makeDeposit( int deposit ) {
	_totalAmount += deposit;
	_totalNbDeposits++;

	_amount += deposit;
	_nbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount - deposit
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits
		<< std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	if (_amount < withdrawal) {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << _amount
			<< ";withdrawal:" << "refused"
			<< std::endl;
		return false;
	} else {
		_totalAmount -= withdrawal;
	   _totalNbWithdrawals++;

	   _amount -= withdrawal;
	   _nbWithdrawals++;

	   _displayTimestamp();
	   std::cout << "index:" << _accountIndex
		   << ";p_amount:" << _amount + withdrawal
		   << ";withdrawal:" << withdrawal
		   << ";amount:" << _amount
		   << ";nb_withdrawals:" << _nbWithdrawals
		   << std::endl;
	   return true;
	}
}

int Account::checkAmount( void ) const {
	return _amount;
}

void Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}

void Account::_displayTimestamp( void ) {
	time_t to_time = std::time(NULL);
	std::string s(30, '\0');

    std::strftime((char *)s.c_str(),
					s.size(),
					"%Y%m%d_%H%M%S",
					std::localtime(&to_time));
	std::cout << '[' << s << "] ";
}
