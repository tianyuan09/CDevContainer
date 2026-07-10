/*
 * C Learning Example: C17 Standard Check
 * Your First C Program!
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
 *       gcc -o test_c test.c
 *     Press Enter. Wait for it to finish (you won't see output, that's normal).
 *     
 *     THEN, copy and paste this:
 *       ./test_c
 *     Press Enter. You should see: "Hello, C World!"
 * 
 *   Method 2: All in one command (easier!)
 *     Copy and paste this entire line into the terminal:
 *       gcc -o test_c test.c && ./test_c
 *     Press Enter. You should see the output appear!
 */

#include <stdio.h>

int main(void) {
    printf("Hello, C World!\n");
    return 0;
}
