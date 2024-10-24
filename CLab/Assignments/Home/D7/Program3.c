/*
QUESTION:
WAP to calculate the reverse of a given number.
Input: Enter a number: 125
Output: Reverse of 125 = 521
*/

#include <stdio.h>

int main() {
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    printf("Reverse = %d\n", reverse);
    return 0;
}

/*
OUTPUT:
Enter a number: 125
Reverse of 125 = 521
*/
