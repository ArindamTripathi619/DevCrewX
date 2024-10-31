/*
QUESTION:
WAP to test whether a number entered through the keyboard is a number in the Fibonacci sequence or not.
*/

#include <stdio.h>

// Function to check if a number is in the Fibonacci sequence
int isFibonacci(int num) {
    int a = 0, b = 1, fib = 0;
    
    while (fib < num) {
        fib = a + b;
        a = b;
        b = fib;
    }
    
    return (fib == num);
}

int main() {
    int num;
    
    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check and display if the number is in the Fibonacci sequence
    if (isFibonacci(num)) {
        printf("Entered number %d is in the Fibonacci Sequence.\n", num);
    } else {
        printf("Entered number %d is not in the Fibonacci Sequence.\n", num);
    }
    
    return 0;
}

/*
OUTPUT 1:
Enter a number: 45
Entered number 45 is not in the Fibonacci Sequence.

OUTPUT 2:
Enter a number: 21
Entered number 21 is in the Fibonacci Sequence.
*/
