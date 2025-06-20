/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lade-kon <lade-kon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/06/20 18:30:34 by lade-kon      #+#    #+#                 */
/*   Updated: 2025/06/20 20:43:50 by lade-kon      ########   odam.nl         */
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
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = inital_desposit;
	
}

//DESTRUCTOR//
Account::~Account(){
	_displayTimestamp();
	
}

//GETTERS//
static int	Account::getNbAccounts(){
	return (_nbAccounts);
}

static int	Account::getTotalAmount(){
	return (_totalAmount);
}

static int	Account::getNbDeposits(){
	return (_totalNbDesposits);
}

static int	Account::getNbWithdrawals(){
	return (_totalNbWithdrawals);
}

static void	Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts() << ";"
	std::cout << "amount:" << Account::getTotalAmount() << ";"
	std::cout << "deposits:" << Account::getNbDeposits() << ";"
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}


void	makeDeposit(int deposit){


	_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts() << ";"
	std::cout << "amount:" << Account::getTotalAmount() << ";"
	std::cout << "deposits:" << Account::getNbDeposits() << ";"
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}
bool	makeWithdrawal(int withdrawal){


	_displayTimestamp();
	std::cout << "index:" << Account::getNbAccounts() << ";"
	std::cout << "amount:" << Account::getTotalAmount() << ";"
	std::cout << "deposits:" << Account::getNbDeposits() << ";"
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	return ;
}
int		checkAmount() const{

	if (Account::getTotalAmount() < 0)
		std::cout << "withdrawal: refused" << std::endl;
	
}
void	displayStatus() const{

}

//PRIVATE//
static void	_displayTimestamp(){

}

