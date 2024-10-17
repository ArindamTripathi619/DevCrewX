/*
WAP to find the sum of the square of first n numbers.
Input : Enter a number: 5
Output: Sum of the square of first 5 numbers: 55
*/
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    printf("Sum of the square of first %d numbers: %d\n", n, sum);
    return 0;
}
/*
OUTPUT:
Enter a number: 10
Sum of the square of first 10 numbers: 385
*/