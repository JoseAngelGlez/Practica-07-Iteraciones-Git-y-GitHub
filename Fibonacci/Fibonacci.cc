 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Fibonacci.cc 
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Desarrolle un programa que imprima los N primeros términos de la Serie de Fibonacci. Los primeros términos de la serie son: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...
 * @bugs No bugs
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md#pr%C3%A1ctica-07-iteraciones-git-y-github
 */

#include"Fibonacci.h"

int ReadNumber() {
  std::cin >> number_of_numbers;
  return 0;
}

void FibonacciOperationAndPrint() {
  if (number_of_numbers == number0 || number_of_numbers == 1){
    std::cout << number0 << std::endl;
  } else if (number_of_numbers == 2) {
    std::cout << number0 << " " << number1 << std::endl;
  } else {
    std::cout << number0 << " " << number1;
    for (int i{3}; i <= number_of_numbers; ++i) {
      result = number0 + number1;
      number0 = number1;
      number1 = result;
      if (i == number_of_numbers) {
        std::cout << " " << result << std::endl;
      }
      else {
        std::cout <<  " " << result;
      }
    }
  }
}

int main() {;
  ReadNumber();
  FibonacciOperationAndPrint();
  return (0);
}
