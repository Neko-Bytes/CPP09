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
#include <string>
#include <map>

class BitcoinExchange{
    private:
        std::map<std::string, double> _rates;

        void isValid(std::string date);
        void parseValue(std::string date);

    public:
        float get_rates(std::string date);
};
