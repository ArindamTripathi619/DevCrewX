/*
5. WAP to find the first n numbers of a Fibonacci sequence.

Input: Enter a number: 10
Output: First 10 numbers of the Fibonacci sequence are: 0 1 1 2 3 5 8 13 21 34
*/
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Input: Number of terms in the Fibonacci sequence
    printf("Enter a number : ");
    scanf("%d", &n);

    // Output: Display the Fibonacci sequence
    printf("First %d numbers of the Fibonacci sequence are : ", n);

    // Loop to print Fibonacci sequence
    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", first);
        } else if (i == 1) {
            printf("%d ", second);
        } else {
            next = first + second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
    printf("\n");

    return 0;
}
/*
OUTPUT : 
Enter a number: 10
First 10 numbers of the Fibonacci sequence are: 0 1 1 2 3 5 8 13 21 34 
*/