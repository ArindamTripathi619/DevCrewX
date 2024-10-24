/*
QUESTION:
WAP to find the largest between two numbers.

Input: Enter two numbers: 80 90
Output: The largest number is 90.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The largest number is %d.\n", num1);
    } else {
        printf("The largest number is %d.\n", num2);
    }

    return 0;
}
/*
OUTPUT:
The largest number is 90.
*/
