// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This is the "variable" program, with proper style

#include <iostream>
int length;
int width;
int area;
int perimeter;

int main() {
  // This function calculate the area and perimeter with variable

  // input
  std::cout << "enter length of the rectangle(mm): " << std::endl;
  std::cin >> length;
  std::cout << "enter width of the rectangle(mm): " << std::endl;
  std::cin >> width;

  // process
  area = length * width;
  perimeter = (length + width) * 2;

  // putput
  std::cout << "" << std::endl;
  std::cout << "a = L x W = " << area << " mm²" << std::endl;
  std::cout << "p = (L + W) x 2 = " << perimeter << " mm" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "Done" << std::endl;
}
