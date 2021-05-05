// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on April 29, 2021
// Runs the Guess the numer game with random numbers

#include <iostream>
#include <random>

main() {
    // Function that runs the guess the number game
    int program_number, user_number;
    // User input
    std::cout << "Welcome to Guess the number!\nInput a number from 0-100: ";
    std::cin >> user_number;
    // Process
        std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 100);
    program_number = idist(rgen);
    if (user_number == program_number) {
        std::cout << "You have guessed the correct number, nice!";
    } else {
        std::cout << "You have guessed incorrectly\nThe correct number is: ";
        std::cout << program_number;
    }
}
