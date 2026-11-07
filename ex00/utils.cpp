/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 21:50:57 by kmummadi          #+#    #+#             */
/*   Updated: 2025/05/06 08:26:39 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string colortxt(const std::string &str, const std::string &color) {
  return (color + str + RESET);
}

void colorprint(const std::string &str, const std::string &color) {
  std::string colorstr = colortxt(str, color);
  std::cout << colorstr;
}

void errorprint(const std::string &str, const std::string &color) {
  std::cerr << colortxt("\n[Error]: ", color) << colortxt(str, color) << "\n";
  return;
}

void fileprint(const std::string &filename) {
  std::ifstream in(filename);
  std::string line;
  colorprint(filename, YELLOW);
  colorprint(":\n\n", YELLOW);

  while (std::getline(in, line)) {
    std::cout << line;
    if (!in.eof())
      std::cout << "\n";
  }
  in.close();
}
