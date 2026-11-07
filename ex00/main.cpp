/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 11:13:17 by kmummadi          #+#    #+#             */
/*   Updated: 2026/11/07 11:16:00 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include "utils.hpp"

int main (int argc, char **argv)
{
    if (argc < 1)
        return (-1);

    fileprint(argv[1]);

    return (0);
}
