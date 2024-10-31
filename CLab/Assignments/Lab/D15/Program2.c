/*
QUESTION:
WAP to find the factorial of a number by using a suitable user-defined function.
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

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Display the factorial using the factorial function
    printf("Factorial of %d = %d\n", num, factorial(num));
    
    return 0;
}

/*
OUTPUT:
Enter a number: 5
Factorial of 5 = 120
*/
