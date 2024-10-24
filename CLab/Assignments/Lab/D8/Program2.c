/*
QUESTION:
WAP to check whether a number n is prime number or not.
Input 1: Enter a number: 7
Output 1: 7 is a prime number.
Input 2: Enter a number: 24
Output 2: 24 is not a prime number.
*/

#include <stdio.h>

int main() {
    int n, is_prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

/*
OUTPUT:
Enter a number: 7
7 is a prime number.
Enter a number: 24
24 is not a prime number.
*/
