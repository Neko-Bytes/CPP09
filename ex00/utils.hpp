/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 21:47:22 by kmummadi          #+#    #+#             */
/*   Updated: 2025/05/07 01:13:43 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

// Define colours
const std::string RED = "\033[1;31m";
const std::string GREEN = "\033[1;32m";
const std::string YELLOW = "\033[1;33m";
const std::string BLUE = "\033[1;34m";
const std::string ORANGE = "\033[38;5;208m"; // Extended ANSI: orange!
const std::string RESET = "\033[0m";
const std::string ITALIC = "\033[3m";

std::string colortxt(const std::string &str, const std::string &color);
void colorprint(const std::string &str, const std::string &color);
void errorprint(const std::string &str, const std::string &color);
void fileprint(const std::string &filename);
