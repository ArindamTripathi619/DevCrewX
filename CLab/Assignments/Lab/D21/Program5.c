/*
QUESTION:
Write a C program to swap two consecutive characters starting from left to right of a string using pointer.
Input: Enter a string: UNIVERSITY
Output: After swapping two consecutive characters starting from left to right the string is : NUVIREISYT
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *p;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Swap consecutive characters
    p = str;
    for (int i = 0; i < strlen(str) - 1; i += 2) {
        char temp = *(p + i);
        *(p + i) = *(p + i + 1);
        *(p + i + 1) = temp;
    }

    // Output the modified string
    printf("After swapping two consecutive characters the string is: %s\n", str);

    return 0;
}

/*
OUTPUT:
Enter a string: UNIVERSITY
After swapping two consecutive characters starting from left to right the string is: NUVIREISYT
*/
