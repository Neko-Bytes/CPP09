/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 09:53:25 by kmummadi          #+#    #+#             */
/*   Updated: 2026/11/07 09:53:25 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <sstream>
#include <string>

BitcoinExchange::BitcoinExchange(std::string &date) {
    (void) date;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy){
    if (this != &copy){
        _rates = copy._rates;
    }

    return (*this);
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::parseValues(){
    std::string line;
    std::stringstream ss;
    std::string key;
    std::string value;
    while(std::getline(_filename, line)){
        if(std::getline(ss, key, ',') && std::getline(ss, value))
        {
            _rates[key] = std::stof(value);
        }
    }
}
