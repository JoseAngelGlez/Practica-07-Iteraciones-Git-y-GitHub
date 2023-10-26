 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Sum_Of_Numbers.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Escriba un programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión.
 * @bugs No bugs
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md#pr%C3%A1ctica-07-iteraciones-git-y-github
 */

#include"Sum_Of_Numbers.h"

int ReadNumber() {
  std::cin >> number;
  return 0;
}

int SumOfDigits() {
  while (number > 0) {
    sum_of_digits += (number % kDivisor);
    number /= kDivisor;
  }
  return 0;
}

void PrintSumOfDigits() {
  std::cout << sum_of_digits << std::endl;
}

int main() {
  ReadNumber();
  SumOfDigits();
  PrintSumOfDigits();
  return (0);
}
