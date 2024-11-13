/*
QUESTION:
WAP to find the factorial of a number n by writing a recursive function for it.
*/

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Display the factorial
    printf("Factorial of %d = %d\n", n, factorial(n));
    
    return 0;
}

/*
OUTPUT:
Enter a number: 5
Factorial of 5 = 120
*/
