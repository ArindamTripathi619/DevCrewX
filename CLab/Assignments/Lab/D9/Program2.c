/*
QUESTION:
WAP to calculate the sum of the following series:
Sum = 1 − x^2/2! + x^4/4! − x^6/6! + x^8/8! − x^10/10!
The user has to input the value of x, and the program calculates the sum of the series.
*/

#include <stdio.h>
#include <math.h>

// Function to calculate factorial
double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, sum = 1;
    
    // Input the value of x
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    
    // Calculate the sum of the series
    for (int i = 2; i <= 10; i += 2) {
        double term = pow(x, i) / factorial(i);
        if (i % 4 == 0) {
            sum += term;  // Even powers have a positive sign
        } else {
            sum -= term;  // Odd powers have a negative sign
        }
    }
    
    // Display the result
    printf("Sum of the given series: %.4lf\n", sum);
    
    return 0;
}

/*
OUTPUT:
Enter the value of x: 2
Sum of the given series: -0.4169
*/
