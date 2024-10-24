/*
QUESTION:
A set of two linear equations with two unknowns x1 and x2 is given below:
a * x1 + b * x2 = m
c * x1 + d * x2 = n
The set has the following unique solution provided the denominator is not equal to zero.

x1 = (m * d - b * n) / (a * d - c * b)
x2 = (n * a - m * c) / (a * d - c * b)

WAP that will read the values of constants a, b, c, d, m, and n and compute the values of x1 and x2. An appropriate message should be printed if (a * d - c * b) = 0.

Input 1: Enter the values of constants a, b, c, d, m, and n: 2 3 1 5 4 2
Output 1: x1 = 2 and x2 = 0
Input 2: Enter the values of constants a, b, c, d, m, and n: 2 5 2 5 4 2
Output 2: The value of x1 and x2 cannot be computed since (a * d - c * b) = 0.
*/

#include <stdio.h>

int main() {
    float a, b, c, d, m, n, denominator, x1, x2;
    
    printf("Enter the values of constants a, b, c, d, m, and n: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &m, &n);

    denominator = a * d - c * b;

    if (denominator != 0) {
        x1 = (m * d - b * n) / denominator;
        x2 = (n * a - m * c) / denominator;
        printf("x1 = %.2f and x2 = %.2f\n", x1, x2);
    } else {
        printf("The value of x1 and x2 cannot be computed since (a * d - c * b) = 0.\n");
    }

    return 0;
}
/*
OUTPUT:
x1 = 2.00 and x2 = 0.00
The value of x1 and x2 cannot be computed since (a * d - c * b) = 0.
*/
