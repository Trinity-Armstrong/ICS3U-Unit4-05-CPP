// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This is the calculate sum program

#include <iostream>

int main() {
    // This function runs the calculate sum program

    // Variables
    int counter;
    int addingNumber;
    int sum = 0;
    int number;

    // Input
    std::cout << "How many numbers are you going to add: " << std::endl;
    std::cin >> addingNumber;
    std::cout << "" << std::endl;

    // Process
    for (counter = 0; counter < addingNumber; counter++) {
        std::cout << "Enter a number to add: " << std::endl;
        std::cin >> number;
        if (number < 0) {
            continue;
        }
        sum = sum + number;
    }

    // Output
    std::cout << "" << std::endl;
    std::cout << "Sum of just the positive numbers is =  " << sum << std::endl;
}
