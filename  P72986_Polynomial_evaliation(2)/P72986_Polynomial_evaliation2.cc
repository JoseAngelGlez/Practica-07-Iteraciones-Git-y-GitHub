/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Polynomial_evaluation2.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 29 10 2023
 * @brief The program read a number "x" and print the solution of the ecuacion.
 * @see https://jutge.org/problems/P72986_en
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

int main() {
  double number_x, component, result{0.0};
  std::cin >> number_x;
  int exponent{0};
  std::vector<double> numbers;
  while (std::cin >> component) {
    numbers.push_back(component);
    ++exponent;
  }
  for (int i = 0; i < exponent; ++i) {
    result += numbers[i] * pow(number_x, exponent - i - 1);
  }
  std::cout << std::fixed << std::setprecision(4);
  std::cout << result << std::endl;
  return 0;
}