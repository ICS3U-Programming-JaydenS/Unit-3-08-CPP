// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: April 3, 2025
// This is a number guessing game.
#include <iostream>
#include <string>

int main() {
    // Define my variables
    std::string user_year_as_string;
    int user_year_as_int;

    // Get user year
    std::cout << "What year is it? : ";
    std::cin >> user_year_as_string;

    // Check if user year is a integer
    try {
        int user_year_as_int = std::stoi(user_year_as_string);

        // Checks if integer is negative
        if (user_year_as_int < 0) {
            std::cout << "This program only works for positive numbers"
            << std::endl;

        // If not it code continues checking if it's a leap year
        } else {
            if (user_year_as_int % 4 == 0) {
                if (user_year_as_int % 100 != 0) {
                    std::cout << "It is a leap year!" << std::endl;
                } else {
                    if (user_year_as_int % 400 == 0) {
                     std::cout << "It is is a leap year" << std::endl;
                    } else {
                        std::cout << "It is not a leap year";
                    }
                    }
            } else {
                std::cout << "It is not a leap year!" << std::endl;
            }
        }

    // If its not a int this happens
    } catch (std::exception&) {
        std::cout << user_year_as_string << " is not a number" << std::endl;
    }
}
