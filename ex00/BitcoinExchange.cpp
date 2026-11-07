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
#include <fstream>
#include <iostream>
#include <ostream>
#include <sstream>
#include <stdexcept>
#include <string>

BitcoinExchange::BitcoinExchange() : _filename("data.csv") { parseValues(); }

BitcoinExchange::BitcoinExchange(std::string &filename) {
  _filename = filename;
  parseValues();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) { *this = copy; }

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) {
  if (this != &copy) {
    _rates = copy._rates;
  }

  return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::parseValues() {
  std::string line;
  std::string key;
  std::string value;

  std::ifstream File(_filename);
  if (!File.is_open())
    return;
  while (std::getline(File, line)) {
    std::stringstream ss(line);
    if (std::getline(ss, key, ',') && std::getline(ss, value, ',')) {
      try {
        _rates[key] = std::stof(value);
      } catch (std::invalid_argument what) {
        // Most prolly a text or header of the column
        continue;
      }
    }
  }
  return;
}

void BitcoinExchange::print_map() {
  for (auto it = _rates.begin(); it != _rates.end(); it++) {
    std::cout << "Key: " << it->first << " | Value: " << it->second;
    std::cout << std::endl;
  }
}
