/*
QUESTION:
WAP to find the sum of the first and last digits of a six-digit number. The number must be user input.

Input: Enter a six-digit number: 234459
Output: Sum of the first and last digit: 11
*/

#include <stdio.h>

int main() {
    int number, first_digit, last_digit;

    printf("Enter a six-digit number: ");
    scanf("%d", &number);

    last_digit = number % 10;
    
    while (number >= 10) {
        number /= 10;
    }
    first_digit = number;

    printf("Sum of the first and last digit: %d\n", first_digit + last_digit);

    return 0;
}
/*
OUTPUT:
Sum of the first and last digit: 11
*/
