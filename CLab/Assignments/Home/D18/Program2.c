/*
QUESTION:
Write a C program to find the sum of the digits of an integer until it reduces to a single-digit number using recursion.
*/

#include <stdio.h>

// Recursive function to calculate the sum of digits until a single digit
int sumDigits(int n) {
    if (n < 10)
        return n;
    return sumDigits(n % 10 + sumDigits(n / 10));
}

int main() {
    int num;
    
    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Display the single-digit sum
    printf("Sum of digits until single digit = %d\n", sumDigits(num < 0 ? -num : num));
    
    return 0;
}

/*
OUTPUT:
Enter an integer: 9875
Sum of digits until single digit = 2

Enter an integer: 1234
Sum of digits until single digit = 1
*/
