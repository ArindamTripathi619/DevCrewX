/*
QUESTION:
WAP to print the series sum of the following series S = 1 + (1+2) + (1+2+3) + ... + (1+2+3+...+n)
Input: Enter the value of n: 5
Output: Sum of the series: 35
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
    }

    printf("Sum of the series: %d\n", sum);
    return 0;
}

/*
OUTPUT:
Enter the value of n: 5
Sum of the series: 35
*/
