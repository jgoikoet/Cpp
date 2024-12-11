/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgoikoet <jgoikoet@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:17:13 by jgoikoet          #+#    #+#             */
/*   Updated: 2023/12/19 12:16:06 by jgoikoet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount = _totalAmount + initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << "\033[1;34m" << _accountIndex << "\033[0m" << ";amount:" << "\033[1;34m"\
	<< initial_deposit << "\033[0m" << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();

	std::cout << "index:" << "\033[1;34m" << _accountIndex << "\033[0m" << ";amount:" << "\033[1;34m"\
	<< _amount << "\033[0m" << ";closed" << std::endl;	
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();

	std::cout << "accounts:" << "\033[1;34m" << getNbAccounts() << "\033[0m"\
	<< ";total:" << "\033[1;34m" << getTotalAmount() << "\033[0m" << ";deposits:"\
	<< "\033[1;34m" << getNbDeposits() << "\033[0m" << ";withdrawals:" << "\033[1;34m"\
	<< getNbWithdrawals() << "\033[0m" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();

	std::cout << "index:" << "\033[1;34m" << _accountIndex << "\033[0m"\
	<< ";p_amount:" << "\033[1;34m" << _amount << "\033[0m" << ";deposit:"\
	<< "\033[1;34m" << deposit << "\033[0m";
	
	_amount = _amount + deposit;
	_nbDeposits++;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits++;

	std::cout << ";amount:" << "\033[1;34m" << _amount << "\033[0m" << ";nb_deposits:"\
	<< "\033[1;34m" << _nbDeposits << "\033[0m" << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();

	if (withdrawal <= _amount)
	{
		std::cout << "index:" << "\033[1;34m" << _accountIndex << "\033[0m"\
		<< ";p_amount:" << "\033[1;34m" << _amount << "\033[0m" << ";whitdrawal:"\
		<< "\033[1;34m" << withdrawal << "\033[0m";
	
		_amount = _amount - withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount = _totalAmount - withdrawal;
	
		std::cout << ";amount:" << "\033[1;34m" << _amount << "\033[0m" << ";nb_withdrawals:"\
		<< "\033[1;34m" << _nbWithdrawals << "\033[0m" << std::endl;
		return (true);
	}
	else
		std::cout << "index:" << "\033[1;34m" << _accountIndex << "\033[0m" << ";p_amount:"\
		<< "\033[1;34m" << _amount << "\033[0m" << ";withdrawal:refused" << std::endl;
	return (false);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();

	std::cout << "index:" << "\033[1;34m" << _accountIndex << "\033[0m" << ";amount:" << "\033[1;34m" \
	<< _amount << "\033[0m" << ";deposits:" << "\033[1;34m" << _nbDeposits << "\033[0m" << ";withdrawals:"\
	<< "\033[1;34m" << _nbWithdrawals << "\033[0m" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	//obtener tiempo actual
	 std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    // Convertir el tiempo actual a un formato de tiempo de C
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    // Obtener la estructura tm local
    std::tm* local_tm = std::localtime(&now_c);

	std::cout << "[" << local_tm->tm_year + 1900 << local_tm->tm_mon + 1 << local_tm->tm_mday << "_" \
	<< local_tm->tm_hour << local_tm->tm_min << local_tm->tm_sec << "] ";
}