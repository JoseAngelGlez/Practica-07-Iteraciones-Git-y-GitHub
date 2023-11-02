/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 
 * @file  P50327_Rversed_number.cc
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 28 10 2023
 * @brief Write a program that reads a number and prints it reversed.
 * @bugs No bugs
 * @see https://jutge.org/problems/P50327_en
 */

#include <iostream>
#include <string>

int main() {
  int number, reversed_number, size;
  std::cin >> number;
  std::string string_number = std::to_string(number);
  size = string_number.size();
  for (int i{0}; i < (size - 1); ++i) {
    reversed_number = number % 10;
    number /= 10;
    std::cout << reversed_number;
  }
  reversed_number = number % 10;
  std::cout << reversed_number << std::endl;
  return 0;
}