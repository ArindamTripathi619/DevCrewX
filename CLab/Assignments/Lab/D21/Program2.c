/*
QUESTION:
Write a C program to swap two numbers using call by reference.
Input: Enter two numbers: 10 20
Output: Before swapping the numbers are: 10 20
        After swapping the numbers are: 20 10
*/

#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Before swapping
    printf("Before swapping the numbers are: %d %d\n", a, b);

    // Swap numbers
    swap(&a, &b);

    // After swapping
    printf("After swapping the numbers are: %d %d\n", a, b);

    return 0;
}

/*
OUTPUT:
Enter two numbers: 10 20
Before swapping the numbers are: 10 20
After swapping the numbers are: 20 10
*/
