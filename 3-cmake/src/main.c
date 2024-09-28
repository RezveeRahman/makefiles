/**
 * Using Cmake to create this C program.
 */

#include <stdio.h>
#include <stdlib.h>

#include "../lib/rezlib.c"

int main(void) {
    printf("Creating a new main function\n");

    printf("2 x 2 = %d\n", multiplication(2, 2));

    return EXIT_SUCCESS;
}