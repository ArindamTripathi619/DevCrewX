/*
QUESTION:
WAP to input any three distinct integers and display the greatest of the three integers.

Input: Enter three distinct integers: 33 77 48
Output: Greatest integer is 77.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three distinct integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("Greatest integer is %d.\n", a);
    } else if (b > a && b > c) {
        printf("Greatest integer is %d.\n", b);
    } else {
        printf("Greatest integer is %d.\n", c);
    }

    return 0;
}
/*
OUTPUT:
Greatest integer is 77.
*/
