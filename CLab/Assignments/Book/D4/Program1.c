/*
QUESTION:
WAP to input an integer between 0 and 128 and print its ASCII character.

Input: Enter an integer between 0 and 128: 2
Output: ASCII value of 2 = B
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer between 0 and 128: ");
    scanf("%d", &num);

    if (num >= 0 && num <= 128) {
        printf("ASCII value of %d = %c\n", num, num);
    } else {
        printf("Invalid input. Enter a number between 0 and 128.\n");
    }

    return 0;
}
/*
OUTPUT:
ASCII value of 2 = B
*/
