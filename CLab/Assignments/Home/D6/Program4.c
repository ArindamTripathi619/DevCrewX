/*
QUESTION:
Write a C program to check whether a number is positive, negative, or zero using switch case.

Input 1: Enter a number: 45
Output 1: Entered number is positive.
Input 2: Enter a number: -54
Output 2: Entered number is negative.
*/

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0) {
        case 1: printf("Entered number is positive.\n"); break;
        case 0:
            switch (num < 0) {
                case 1: printf("Entered number is negative.\n"); break;
                default: printf("Entered number is zero.\n");
            }
    }

    return 0;
}
/*
OUTPUT:
Entered number is positive.
Entered number is negative.
*/
