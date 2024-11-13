/*
QUESTION:
Write a C program to remove all leading and trailing spaces from a given string.
Input: Enter a string:    India is great    
Output: After removing leading and trailing spaces the string is: India is great
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void trimSpaces(char *str) {
    int start = 0, end = strlen(str) - 1;

    // Remove leading spaces
    while (isspace(str[start])) {
        start++;
    }

    // Remove trailing spaces
    while (end >= start && isspace(str[end])) {
        end--;
    }

    // Copy trimmed string
    int j = 0;
    for (int i = start; i <= end; i++) {
        str[j++] = str[i];
    }
    str[j] = '\0';
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Trim spaces
    trimSpaces(str);

    // Output the modified string
    printf("After removing leading and trailing spaces the string is: %s\n", str);

    return 0;
}

/*
OUTPUT:
Enter a string:    India is great    
After removing leading and trailing spaces the string is: India is great
*/
