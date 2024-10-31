/*
QUESTION:
Write a C program to determine if a number is prime or not using a function named "isPrime".
*/

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;  // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // Divisible by i, not prime
    }
    return 1;  // Prime
}

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check and display if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter a number: 11
11 is a prime number.

OUTPUT 2:
Enter a number: 30
30 is not a prime number.
*/
