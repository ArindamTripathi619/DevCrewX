/*
QUESTION:
WAP to find the sum of the digits of a three-digit number entered from the keyboard.

Input: Enter a three-digit number: 354
Output: Sum of digits of 354 = 12
*/

#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
/*
OUTPUT:
Sum of digits of 354 = 12
*/
