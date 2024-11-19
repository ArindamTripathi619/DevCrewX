/*
QUESTION:
Write a C program to read a string and print it in reverse order using a pointer.
Input: Enter a string: INDIA
Output: Entered string in reverse order: AIDNI
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *p;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Use pointer to print in reverse
    p = str + strlen(str) - 1;
    printf("Entered string in reverse order: ");
    while (p >= str) {
        printf("%c", *p);
        p--;
    }
    printf("\n");

    return 0;
}

/*
OUTPUT:
Enter a string: INDIA
Entered string in reverse order: AIDNI
*/
