 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Bisiesto.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Escriba un programa leap-year.cc que indique si un año es o no bisiesto Un año bisiesto tiene 366 días.
 * @bugs No bugs
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md#pr%C3%A1ctica-07-iteraciones-git-y-github
 */

#include"Bisiesto.h"

void ReadNumber() {
  std::cin >> ano;
}

void Bisiesto() {
  if (ano % kDivisor100 != 0 && ano % kDivisor4 == 0) {
    std::cout << "YES\n";
  } else if (ano % kDivisor400 == 0) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }
}

int main() {
  ReadNumber();
  Bisiesto();
  return 0;
}
