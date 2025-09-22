/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/20 18:30:34 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/09/22 16:36:46 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <string>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//CONSTRUCTORS//
Account::Account(){}

Account::Account(int initial_deposit){
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	
	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

//DESTRUCTOR//
Account::~Account(){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount; 
	std::cout << ";closed" << std::endl;
	
	_nbAccounts--;
    _totalAmount -= this->_amount;
}

//GETTERS//
int	Account::getNbAccounts(){
	return (_nbAccounts);
}

int	Account::getTotalAmount(){
	return (_totalAmount);
}

int	Account::getNbDeposits(){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}

void	Account::makeDeposit(int deposit){
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount + deposit << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;

	this->_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal){
	if (this->_amount - withdrawal < 0){
		_displayTimestamp();

		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	else{
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;

		_displayTimestamp();

		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:" << withdrawal;
		std::cout << ";amount:" << this->_amount - withdrawal;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

		this->_amount -= withdrawal;

		return true;
	}
}

int		Account::checkAmount() const{
	return _amount;
}

void	Account::displayStatus() const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

//PRIVATE//
void	Account::_displayTimestamp(){
	std::time_t	now = std::time(nullptr);
	std::tm		*local = std::localtime(&now);

	char	buffer[50];

	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local);
	std::cout << buffer;
}
