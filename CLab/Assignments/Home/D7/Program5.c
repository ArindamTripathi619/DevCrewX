/*
QUESTION:
WAP to find the first n numbers of a Fibonacci sequence.
Input: Enter a number: 10
Output: First 10 numbers of the Fibonacci sequence are: 0 1 1 2 3 5 8 13 21 34
*/

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d numbers of the Fibonacci sequence are: ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }

    printf("\n");
    return 0;
}

/*
OUTPUT:
Enter a number: 10
First 10 numbers of the Fibonacci sequence are: 0 1 1 2 3 5 8 13 21 34
*/
