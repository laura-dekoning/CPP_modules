/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/20 18:30:34 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/07/15 18:33:31 by lade-kon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//CONSTRUCTORS//
Account::Account(){}

Account::Account(int initial_deposit){
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->getNbAccounts();
	this->_amount = initial_deposit;
	
	Account::_displayTimestamp();
}

//DESTRUCTOR//
Account::~Account(){

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
	std::cout << "index:" << Account::getNbAccounts() << ";";
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}


void	Account::makeDeposit(int deposit){



}
bool	Account::makeWithdrawal(int withdrawal){



}
int		Account::checkAmount() const{

	if (Account::getTotalAmount() < 0)
		std::cout << "withdrawal: refused" << std::endl;
	
}

void	Account::displayStatus() const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}

//PRIVATE//
static void	_displayTimestamp(){

}

