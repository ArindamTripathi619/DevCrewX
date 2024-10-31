/*
QUESTION:
WAP to find out the value of the nth term of the Fibonacci sequence by writing a suitable user-defined function.
*/

#include <stdio.h>

// Function to find nth Fibonacci term
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Display the nth Fibonacci term
    printf("%dth term of the Fibonacci Sequence is %d\n", n, fibonacci(n));
    
    return 0;
}

/*
OUTPUT:
Enter the value of n: 8
8th term of the Fibonacci Sequence is 13
*/
