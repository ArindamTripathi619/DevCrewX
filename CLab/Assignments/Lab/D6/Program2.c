/*
QUESTION:
WAP to determine whether a year entered through the keyboard is a leap year or not.

Input 1: Enter the year: 2005
Output 1: 2005 is not a leap year.
Input 2: Enter the year: 2000
Output 2: 2000 is a leap year.
*/

#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
        } else {
            printf("%d is a leap year.\n", year);
        }
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
/*
OUTPUT:
2005 is not a leap year.
2000 is a leap year.
*/
