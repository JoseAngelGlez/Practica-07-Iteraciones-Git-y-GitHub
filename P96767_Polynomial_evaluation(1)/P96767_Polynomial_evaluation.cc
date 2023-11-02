 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file P96767_Polynomial_evaluation.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 129 10 2023
 * @brief The program read a number "x" and print the solution of the ecuacion.
 * @bugs No bugs
 * @see https://jutge.org/problems/P96767_en
 */

#include<iostream>
#include<math.h>
#include<iomanip>

double numberx, exponent{0.0}, result, multipliers{0.0};


int ReadNumber() {
  std::cin >> numberx;
  return 0;
}

int Operations() {
  while(std::cin >> multipliers) {
    result += multipliers * pow(numberx, exponent);
    ++exponent;
  }
  return 0;
}

int PrintNumber() {
  std::cout << std::fixed;
  std::cout << std::setprecision(4) << result << std::endl;
  return 0;
}

int main () {
  ReadNumber();
  Operations();
  PrintNumber();
  return 0;
}