/*
QUESTION:
Write a C program using structures to perform addition, subtraction, and multiplication of two complex numbers.
Input:
Enter the first Complex:
Real Part: 2
Imaginary Part: 5
Enter the second Complex:
Real Part: 3
Imaginary Part: 4
Output:
First Complex No: 2 + 5i
Second Complex No: 3 + 4i
Sum: 5 + 9i
Difference: -1 + 1i
Product: -14 + 23i
*/

#include <stdio.h>

// Define the structure for complex numbers
struct Complex {
    int real;
    int imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    struct Complex c1, c2, sum, diff, product;

    // Input the first complex number
    printf("Enter the first Complex:\n");
    printf("Real Part: ");
    scanf("%d", &c1.real);
    printf("Imaginary Part: ");
    scanf("%d", &c1.imag);

    // Input the second complex number
    printf("\nEnter the second Complex:\n");
    printf("Real Part: ");
    scanf("%d", &c2.real);
    printf("Imaginary Part: ");
    scanf("%d", &c2.imag);

    // Perform operations
    sum = addComplex(c1, c2);
    diff = subtractComplex(c1, c2);
    product = multiplyComplex(c1, c2);

    // Display the results
    printf("\nFirst Complex No: %d + %di\n", c1.real, c1.imag);
    printf("Second Complex No: %d + %di\n", c2.real, c2.imag);
    printf("Sum: %d + %di\n", sum.real, sum.imag);
    printf("Difference: %d + %di\n", diff.real, diff.imag);
    printf("Product: %d + %di\n", product.real, product.imag);

    return 0;
}

/*
OUTPUT:
Enter the first Complex:
Real Part: 2
Imaginary Part: 5

Enter the second Complex:
Real Part: 3
Imaginary Part: 4

First Complex No: 2 + 5i
Second Complex No: 3 + 4i
Sum: 5 + 9i
Difference: -1 + 1i
Product: -14 + 23i
*/
