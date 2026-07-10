/*
 * C Learning Example: C17 Standard Check
 * Your First C Program!
 * 
 * INSTRUCTIONS FOR BEGINNERS:
 * These commands must be run in the TERMINAL (command line).
 * Copy and paste each command, then press Enter.
 * 
 * TO COMPILE AND RUN:
 *   Step 1: Compile the program (translates C code to executable)
 *     gcc -std=c17 -o test_c test.c
 *     Explanation:
 *       gcc = compiler command
 *       -std=c17 = tells compiler to use C17 standard
 *       -o test_c = name of the output file
 *       test.c = source code file to compile
 * 
 *   Step 2: Run the compiled program
 *     ./test_c
 *     Explanation:
 *       ./ = look in current directory
 *       test_c = name of the program to run
 * 
 *   Quick way (all in one command):
 *     gcc -std=c17 -o test_c test.c && ./test_c
 *     && = "then do" (run next command only if first succeeds)
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
