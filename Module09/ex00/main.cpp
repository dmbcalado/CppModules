/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/27 21:00:59 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

//Overload of operator << for lists

int main(int argc, char *argv[])
{
	std::cout << std::endl;
	if (argc == 2)
	{
		BitcoinExchange	Binance;
		BitcoinExchange Coinbase = Binance;
		BitcoinExchange Revolut;
		Revolut = Binance;

		Coinbase.ExchangeRateData(argv[1]);
	}
}
