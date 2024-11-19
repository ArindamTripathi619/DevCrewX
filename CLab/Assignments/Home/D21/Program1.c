/*
QUESTION:
Write a C program to swap three numbers in cyclic order using call by reference.
Input: Enter three numbers: 10 20 35
Output: Before swapping the numbers are: a=10, b=20, c=35
        After swapping the numbers are: a=35, b=10, c=20
*/

#include <stdio.h>

void cyclicSwap(int *a, int *b, int *c) {
    int temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Before swapping
    printf("Before swapping the numbers are: a=%d, b=%d, c=%d\n", a, b, c);

    // Perform cyclic swap
    cyclicSwap(&a, &b, &c);

    // After swapping
    printf("After swapping the numbers are: a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}

/*
OUTPUT:
Enter three numbers: 10 20 35
Before swapping the numbers are: a=10, b=20, c=35
After swapping the numbers are: a=35, b=10, c=20
*/
