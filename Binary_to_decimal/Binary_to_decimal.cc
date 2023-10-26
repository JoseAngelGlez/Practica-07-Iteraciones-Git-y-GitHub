 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Binary_to_decimal.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Escriba un programa binary-to-decimal.cc que convierta números binarios en decimal.
 * @bugs No bugs
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md#pr%C3%A1ctica-07-iteraciones-git-y-github
 */

#include"Binary_to_decimal.h"

int ReadNumber() {
  std::cin >> binary_number;
  return 0;
}

int BinaryToDecimal() {
  for (int i{0}; i<= kTimesDividing; ++i) {
    if ((binary_number % kDivider10 == 1) || (binary_number % kDivider10 == 0)) {
      decimal_number += (multiplier * (binary_number % kDivider10));
      binary_number /= kDivider10;
      multiplier *= kMultiply2;
    }
    else {
      i += kTimesDividing;
      std::cout << "Worng Input" << std::endl;
      return 1;
    }
  }
  std::cout << decimal_number << std::endl;
  return 0;
}

int main() {
  ReadNumber();
  BinaryToDecimal();
  return 0;
}
