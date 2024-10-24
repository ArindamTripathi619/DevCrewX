/*
QUESTION:
WAP to check whether an input integer is a perfect square or not.
Input 1: Enter a number: 30
Output 1: 30 is not a perfect square.
Input 2: Enter a number: 25
Output 2: 25 is a perfect square.
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, sqrt_n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n)
        printf("%d is a perfect square.\n", n);
    else
        printf("%d is not a perfect square.\n", n);

    return 0;
}

/*
OUTPUT:
Enter a number: 30
30 is not a perfect square.

Enter a number: 25
25 is a perfect square.
*/
