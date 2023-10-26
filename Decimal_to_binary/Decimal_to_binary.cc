 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Decimal_to_binary.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Escriba un programa decimal-to-binary.cc que convierta números de decimal a binario.
 * @bugs No bugs
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md#pr%C3%A1ctica-07-iteraciones-git-y-github
 */

#include"Decimal_to_binary.h"

void ReadNumber() {
  std::cin >> decimal;
}

void DecimalToBinary() {
  if (decimal == 0) {
    std::cout << "0" << std::endl;
  }
  while (decimal > 0) {
    int remainder = decimal % 2;
    binary = binary + remainder * base;
    decimal = decimal / 2;
    base = base * 10;
  }
  std::cout << binary << std::endl;
}

int main() {
  ReadNumber();
  DecimalToBinary();
  return 0;
}

