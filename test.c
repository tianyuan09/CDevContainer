/*
 * Compile and run:
 *   gcc -std=c17 -o test_c test.c && ./test_c
 *   clang -std=c17 -o test_c test.c && ./test_c
 */

#include <stdio.h>

int main(void) {
    // __STDC_VERSION__ confirms our standard level
    #if __STDC_VERSION__ >= 201710L
        printf("Hello, C World! C17 is working perfectly.\n");
    #else
        printf("Hello, C World! (Standard is lower than C17)\n");
    #endif
    return 0;
}
