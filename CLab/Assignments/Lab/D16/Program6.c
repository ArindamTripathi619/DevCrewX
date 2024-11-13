/*
QUESTION:
Write a C program to find the sum of only prime values present in a 1-D array using a function primeSum. The function primeSum should use another function isPrime to check if a number is prime.
*/

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to calculate the sum of prime numbers in an array
int primeSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    
    // Input the array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the array elements
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display the sum of prime numbers
    printf("Sum of the prime numbers present in the given array: %d\n", primeSum(arr, n));
    
    return 0;
}

/*
OUTPUT:
Enter the size of the array: 5
Enter the array elements: 41 21 45 23 40
Sum of the prime numbers present in the given array: 64
*/
