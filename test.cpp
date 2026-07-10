/*
 * C++ Learning Example: Modern C++20 Features
 * 
 * This program demonstrates key C++20 concepts:
 *   - iostream: For input/output operations
 *   - Concepts: Templates that check type requirements
 *   - Designated initializers: Clear struct member initialization
 * 
 * TO COMPILE AND RUN:
 *   Step 1: Compile using g++ or clang++ with C++20 standard
 *     g++ -std=c++20 -o test_cpp test.cpp
 *   Step 2: Run the compiled program
 *     ./test_cpp
 *   
 *   Alternative (one command):
 *     g++ -std=c++20 -o test_cpp test.cpp && ./test_cpp
 */

#include <iostream>
#include <concepts>

template<typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

struct Config {
    int version;
    double scale;
};

int main() {
    Config cfg{.version = 20, .scale = 1.0};
    
    std::cout << "Hello, C++ World! C++" << cfg.version << " features are working perfectly.\n";
    return 0;
}