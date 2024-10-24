/*
QUESTION:
WAP to compute the value of Euler’s number (e) using the series:
e = 1 + 1/1! + 1/2! + 1/3! + … 
The loop terminates when the difference between two successive values of e is less than 0.0001.
*/

#include <stdio.h>

// Function to calculate factorial
double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    double e = 1.0, prev_e = 0.0, term;
    int n = 1;
    
    // Loop until the difference between successive values of e is less than 0.0001
    while (e - prev_e > 0.0001) {
        prev_e = e;
        term = 1.0 / factorial(n);
        e += term;
        n++;
    }
    
    // Display the calculated value of e
    printf("The calculated value of Euler’s number (e): %.4lf\n", e);
    
    return 0;
}

/*
OUTPUT:
The calculated value of Euler’s number (e): 2.7183
*/
