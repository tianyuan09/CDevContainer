/*
 * C++ Learning Example: Modern C++20 Features
 * 
 * INSTRUCTIONS FOR BEGINNERS:
 * These commands must be run in the TERMINAL (command line).
 * Copy and paste each command, then press Enter.
 * 
 * TO COMPILE AND RUN:
 *   Step 1: Compile the program (translates C++ code to executable)
 *     g++ -std=c++20 -o test_cpp test.cpp
 *     Explanation:
 *       g++ = compiler command
 *       -std=c++20 = tells compiler to use C++20 standard
 *       -o test_cpp = name of the output file
 *       test.cpp = source code file to compile
 * 
 *   Step 2: Run the compiled program
 *     ./test_cpp
 *     Explanation:
 *       ./ = look in current directory
 *       test_cpp = name of the program to run
 * 
 *   Quick way (all in one command):
 *     g++ -std=c++20 -o test_cpp test.cpp && ./test_cpp
 *     && = "then do" (run next command only if first succeeds)
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