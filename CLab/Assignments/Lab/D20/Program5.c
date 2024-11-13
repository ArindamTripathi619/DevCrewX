/*
QUESTION:
Write a C program to search a pattern string in a text string.
Input: Enter the text string: India is great
       Enter the pattern string: is
Output: Pattern found at index 6
*/

#include <stdio.h>
#include <string.h>

int main() {
    char text[100], pattern[100];
    int textLen, patternLen, found = 0;

    // Input text and pattern strings
    printf("Enter the text string: ");
    gets(text);
    printf("Enter the pattern string: ");
    gets(pattern);

    textLen = strlen(text);
    patternLen = strlen(pattern);

    // Search for the pattern in the text
    for (int i = 0; i <= textLen - patternLen; i++) {
        if (strncmp(&text[i], pattern, patternLen) == 0) {
            printf("Pattern found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Pattern not found\n");
    }

    return 0;
}

/*
OUTPUT:
Enter the text string: India is great
Enter the pattern string: is
Pattern found at index 6
*/
