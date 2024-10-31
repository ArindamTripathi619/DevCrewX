/*
QUESTION:
WAP to find nCr by using a user-defined function. This function should use another user-defined function to find the factorial.
*/

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    
    // Input values of n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Enter the value of r: ");
    scanf("%d", &r);
    
    // Display nCr
    printf("%d C %d = %d\n", n, r, nCr(n, r));
    
    return 0;
}

/*
OUTPUT:
Enter the value of n: 10
Enter the value of r: 2
10 C 2 = 45
*/
