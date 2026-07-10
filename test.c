/*
 * C Learning Example: C17 Standard Check
 * 
 * This program demonstrates:
 *   - stdio.h: Standard C input/output library
 *   - Preprocessor directives: Code that runs before compilation
 *   - __STDC_VERSION__: Built-in macro that identifies the C standard
 * 
 * TO COMPILE AND RUN:
 *   Step 1: Compile using gcc or clang with C17 standard
 *     gcc -std=c17 -o test_c test.c
 *   Step 2: Run the compiled program
 *     ./test_c
 *   
 *   Alternative (one command):
 *     gcc -std=c17 -o test_c test.c && ./test_c
 */

#include <stdio.h>

int main(void) {
    #if __STDC_VERSION__ >= 201710L
        printf("Hello, C World! C17 is working perfectly.\n");
    #else
        printf("Hello, C World! (Standard is lower than C17)\n");
    #endif
    return 0;
}
