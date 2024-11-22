/*
QUESTION:
Write a C program to change the value of a constant integer using pointers.
*/

#include <stdio.h>

int main() {
    const int num = 42;
    int *ptr;

    // Cast the address of the constant to a non-const pointer
    ptr = (int *)&num;

    printf("Before modification: num = %d\n", num);

    // Modify the value through the pointer
    *ptr = 99;

    printf("After modification: num = %d\n", num);

    return 0;
}

/*
OUTPUT:
Before modification: num = 42
After modification: num = 99
*/
