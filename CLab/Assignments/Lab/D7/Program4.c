/*
QUESTION:
WAP to calculate the sum of digits of a given number.
Input: Enter a number: 125
Output: Sum of the digits of 125 = 8
*/

#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of the digits = %d\n", sum);
    return 0;
}

/*
OUTPUT:
Enter a number: 125
Sum of the digits of 125 = 8
*/
