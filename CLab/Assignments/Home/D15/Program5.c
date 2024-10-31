/*

*/

#include <stdio.h>

int main() {
    
    return 0;
}
/*
OUTPUT:

*/
/*
QUESTION:
WAP to calculate GCD/HCF of two numbers using an iterative function.
*/

#include <stdio.h>

// Function to calculate GCD
int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Display the GCD
    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    
    return 0;
}

/*
OUTPUT:
Enter two numbers: 20 45
GCD of 20 and 45 = 5
*/
