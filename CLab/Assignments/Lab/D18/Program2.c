/*
QUESTION:
WAP to calculate GCD of two numbers by using a recursive function findGCD.
*/

#include <stdio.h>

// Recursive function to calculate GCD
int findGCD(int a, int b) {
    if (b == 0) return a;
    return findGCD(b, a % b);
}

int main() {
    int num1, num2;
    
    // Input the two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Display the GCD
    printf("GCD of %d and %d = %d\n", num1, num2, findGCD(num1, num2));
    
    return 0;
}

/*
OUTPUT:
Enter two numbers: 50 70
GCD of 50 and 70 = 10
*/
