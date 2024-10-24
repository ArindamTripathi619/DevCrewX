/*
QUESTION:
WAP to reverse a three-digit number entered from the user.

Input: Enter a number: 376
Output: Reverse of 376 = 673
*/

#include <stdio.h>

int main() {
    int number, reversed_number = 0, remainder;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }

    printf("Reverse of the number = %d\n", reversed_number);

    return 0;
}
/*
OUTPUT:
Reverse of 376 = 673
*/
