/*
 * C++ Learning Example: Modern C++20 Features
 * 
 * INSTRUCTIONS FOR BEGINNERS:
 * 1. OPEN the TERMINAL (the black command line window)
 * 2. COPY the command below (select it, then Ctrl+C)
 * 3. PASTE it into the terminal (Ctrl+V or right-click and paste)
 * 4. Press ENTER
 * 5. Wait for the program to finish
 * 
 * TO COMPILE AND RUN:
 *   Method 1: Two separate commands
 *     FIRST, copy and paste this:
 *       g++ -std=c++20 -o test_cpp test.cpp
 *     Press Enter. Wait for it to finish (you won't see output, that's normal).
 *     
 *     THEN, copy and paste this:
 *       ./test_cpp
 *     Press Enter. You should see: "Hello, C++ World! C++20 features..."
 * 
 *   Method 2: All in one command (easier!)
 *     Copy and paste this entire line into the terminal:
 *       g++ -std=c++20 -o test_cpp test.cpp && ./test_cpp
 *     Press Enter. You should see the output appear!
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