/*
 * Compile and run:
 *   g++ -std=c++20 -o test_cpp test.cpp && ./test_cpp
 *   clang++ -std=c++20 -o test_cpp test.cpp && ./test_cpp
 */

#include <iostream>
#include <concepts>

// A simple C++20 concept check
template<typename T>
concept Numeric = std::integral<T> || std::floating_point<T>;

struct Config {
    int version;
    double scale;
};

int main() {
    // C++20 Designated Initializers
    Config cfg{.version = 20, .scale = 1.0};
    
    std::cout << "Hello, C++ World! C++" << cfg.version << " features are working perfectly.\n";
    return 0;
}