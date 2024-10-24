/*
QUESTION:
WAP to find the sum of the square of the first n numbers.
Input: Enter a number: 5
Output: Sum of the square of first 5 numbers: 55
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of the square of first %d numbers: %d\n", n, sum);
    return 0;
}

/*
OUTPUT:
Enter a number: 5
Sum of the square of first 5 numbers: 55
*/
