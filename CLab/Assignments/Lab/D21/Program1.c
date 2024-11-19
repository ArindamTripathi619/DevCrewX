/*
QUESTION:
Write a C program to multiply two numbers using pointers.
Input: Enter two numbers: 4 5
Output: Product of 4 and 5 = 20
*/

#include <stdio.h>

int main() {
    int a, b, product;
    int *p1, *p2;

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Initialize pointers
    p1 = &a;
    p2 = &b;

    // Calculate product
    product = (*p1) * (*p2);

    // Output the result
    printf("Product of %d and %d = %d\n", a, b, product);

    return 0;
}

/*
OUTPUT:
Enter two numbers: 4 5
Product of 4 and 5 = 20
*/
