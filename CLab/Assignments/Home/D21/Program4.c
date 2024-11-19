/*
QUESTION:
Write a C program to print the size of different types of pointers.
Output: Size of char pointer: 8 bytes
        Size of integer pointer: 8 bytes
        Size of float pointer: 8 bytes
        Size of double pointer: 8 bytes
*/

#include <stdio.h>

int main() {
    printf("Size of char pointer: %zu bytes\n", sizeof(char *));
    printf("Size of integer pointer: %zu bytes\n", sizeof(int *));
    printf("Size of float pointer: %zu bytes\n", sizeof(float *));
    printf("Size of double pointer: %zu bytes\n", sizeof(double *));

    return 0;
}

/*
OUTPUT:
Size of char pointer: 8 bytes
Size of integer pointer: 8 bytes
Size of float pointer: 8 bytes
Size of double pointer: 8 bytes
*/
