/*
QUESTION:
Write a C program to find the nth Fibonacci number using recursion.
*/

#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    
    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Find and display the nth Fibonacci number
    printf("%dth Fibonacci number = %d\n", n, fibonacci(n));
    
    return 0;
}

/*
OUTPUT:
Enter the value of n: 10
10th Fibonacci number = 55
*/
