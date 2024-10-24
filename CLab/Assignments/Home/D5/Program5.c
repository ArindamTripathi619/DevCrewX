/*
QUESTION:
Write a program in C to read any month number in integer and display the number of days for that month.

Input: Enter the month number: 3
Output: Month has 31 days.
*/

#include <stdio.h>

int main() {
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Month has 31 days.\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("Month has 30 days.\n");
            break;
        case 2:
            printf("Month has 28 or 29 days (leap year).\n");
            break;
        default:
            printf("Invalid month number.\n");
    }

    return 0;
}
/*
OUTPUT:
Month has 31 days.
*/
