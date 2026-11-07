/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 19:07:56 by kmummadi          #+#    #+#             */
/*   Updated: 2026/08/15 19:35:43 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <string>

class BitcoinExchange {
private:
  std::string _filename;
  std::map<std::string, float> _rates;

  void isValid(std::string date);
  void parseValues();

public:
  // Constructors and Destructors
  BitcoinExchange();
  BitcoinExchange(std::string &filename);
  BitcoinExchange(const BitcoinExchange &copy);
  BitcoinExchange &operator=(const BitcoinExchange &copy);
  ~BitcoinExchange();

  // Helper functions
  float get_rates(std::string &date);
  void print_map();
};
