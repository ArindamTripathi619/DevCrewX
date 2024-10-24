/*
QUESTION:
WAP to evaluate the sine of an angle x (in radians) using the series:
sin(x) = x − x^3/3! + x^5/5! − x^7/7! + …
The calculation should continue until the terms become less than 0.001% accurate.
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
    double x, term, sin_x = 0.0, prev_sin_x = 0.0;
    int n = 1, sign = 1;
    
    // Input the value of x (in radians)
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    
    // Loop until the difference between successive terms is less than 0.001%
    do {
        prev_sin_x = sin_x;
        term = pow(x, n) / factorial(n);
        sin_x += sign * term;
        sign *= -1;  // Alternate the sign
        n += 2;
    } while (term > 0.001 * prev_sin_x);
    
    // Display the result
    printf("sin(%.2lf) = %.4lf\n", x, sin_x);
    
    return 0;
}

/*
OUTPUT:
Enter the value of x (in radians): 1.5708
sin(1.57) = 1.0000
*/
