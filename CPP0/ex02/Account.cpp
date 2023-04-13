/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:17:31 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/04/13 15:17:31 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account()
{
	std::cout << "[Account created]" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" \
		<< _amount << ";closed" << std::endl;
}

Account::Account(int initial_deposit)
{
	static int	i;

	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	_accountIndex = i++;
	Account::_nbAccounts = i;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";created" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:"\
		<< _amount << ";deposit:" << deposit;
	_amount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" 
		<< _nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount \
		<< ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	else
	{
		Account::_totalAmount -= withdrawal;
		_amount -= withdrawal;
		_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" \
			<< _nbWithdrawals << std::endl;
		return true;
	}
}

int		Account::checkAmount( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	return _amount;
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposits:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}
void Account::_displayTimestamp( void )
{

	time_t now = time(0);
	tm *time = localtime(&now);

	std::cout << "[" << 1900 + time->tm_year;
	if (time->tm_mon < 9)
		std::cout << "0";
	std::cout << 1 + time->tm_mon;
	if (time->tm_mday < 10)
		std::cout << "0";
	std::cout << time->tm_mday << "_";
	if (time->tm_hour < 10)
		std::cout << "0";
	std::cout << time->tm_hour;
	if (time->tm_min < 10)
		std::cout << "0"; 
	std::cout << time->tm_min;
	if (time->tm_sec < 10)
		std::cout << "0"; 
	std::cout << time->tm_sec << "] ";
}