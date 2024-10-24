/*
QUESTION:
WAP to print the weekday name according to the given weekday number using switch case. For weekday number (0-6), print the corresponding weekday name.

Input: Enter the week day number: 3
Output: This is Wednesday.
*/

#include <stdio.h>

int main() {
    int day;
    printf("Enter the week day number (0-6): ");
    scanf("%d", &day);

    switch (day) {
        case 0: printf("This is Sunday.\n"); break;
        case 1: printf("This is Monday.\n"); break;
        case 2: printf("This is Tuesday.\n"); break;
        case 3: printf("This is Wednesday.\n"); break;
        case 4: printf("This is Thursday.\n"); break;
        case 5: printf("This is Friday.\n"); break;
        case 6: printf("This is Saturday.\n"); break;
        default: printf("Invalid weekday number.\n");
    }

    return 0;
}
/*
OUTPUT:
This is Wednesday.
*/
