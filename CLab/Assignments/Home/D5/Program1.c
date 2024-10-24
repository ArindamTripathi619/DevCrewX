/*
QUESTION:
WAP to test whether a number entered through keyboard is ODD or EVEN.

Input 1: Enter a number: 19
Output 1: 19 is an ODD number.
Input 2: Enter a number: 40
Output 2: 40 is an EVEN number.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }

    return 0;
}
/*
OUTPUT:
19 is an ODD number.
40 is an EVEN number.
*/
