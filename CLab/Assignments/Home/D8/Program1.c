/*
QUESTION:
WAP to test whether a number is a Perfect Number or not. (A number is Perfect when the sum of factors excluding the number itself is equal to the original number.)
Input 1: Enter a number: 28
Output 1: 28 is a Perfect Number
Input 2: Enter a number: 7
Output 2: 7 is not a Perfect Number
*/

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is not a Perfect Number.\n", n);

    return 0;
}

/*
OUTPUT:
Enter a number: 28
28 is a Perfect Number.

Enter a number: 7
7 is not a Perfect Number.
*/
