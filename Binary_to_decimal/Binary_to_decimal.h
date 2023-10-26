 /**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @file Binary_to_decimal.h
 * @author Jose Angel Gonzalez Alamo alu0101564180@edu.ull.es
 * @date 26 10 2023
 * @brief Escriba un programa binary-to-decimal.cc que convierta números binarios en decimal.
 * @bugs No bugs
 * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md#pr%C3%A1ctica-07-iteraciones-git-y-github
 */

#include<iostream>

int binary_number, multiplier = 1, decimal_number = 0;
const int kMultiply2 = 2, kDivider10 = 10, kTimesDividing = 8;
