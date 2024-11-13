/*
QUESTION:
WAP by designing a recursive function to calculate the sum of the digits of any given integer.
*/

#include <stdio.h>

// Recursive function to calculate the sum of digits
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumOfDigits(n / 10);
}

int main() {
    int num;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Display the sum of digits
    printf("Sum of the digits of %d = %d\n", num, sumOfDigits(num));
    
    return 0;
}

/*
OUTPUT:
Enter a number: 125
Sum of the digits of 125 = 8
*/
