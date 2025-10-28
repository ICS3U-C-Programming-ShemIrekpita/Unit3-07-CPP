// Created by: Shem
// Created on: 10/27/2025
// Copyright 2025 Shem
// This program checks if you are allowed to date grandparents' grandchild
// based on your age. It handles invalid input safely.
#include <iostream>
#include <stdexcept>
#include <string>

// Constants for age boundaries
const int MIN_AGE = 26;
const int MAX_AGE = 39;

int main() {
// Ask the user to enter their age
    std::string user_input;
    std::cout << "Enter your age: ";
    std::cin >> user_input;

    try {
// This trys to convert input to integer
        int age = std::stoi(user_input);

// This checks if age is within allowed boundaries using AND
        if (age >= MIN_AGE && age <= MAX_AGE) {
            std::cout << "You are allowed to date their grandchild!"
            << std::endl;
        } else {
        std::cout << "Sorry, your age does not meet the grandparents' criteria."
            << std::endl;
        }
    } catch (const std::invalid_argument&) {
        // Handles invalid input
        std::cerr << user_input << " is not a valid number." << std::endl;
    }
}