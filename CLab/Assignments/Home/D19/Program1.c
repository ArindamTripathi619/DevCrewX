/*
QUESTION:
Write a C program to extract the last character of each word in a given string.
Input: Enter a string: Kalinga Institute of Industrial Technology
Output: Last character of each word of the given string: aefly
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int len;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Length of the string
    len = strlen(str);

    // Display the last character of each word
    printf("Last character of each word of the given string: ");
    for (int i = 0; i < len; i++) {
        if ((i == len - 1 || isspace(str[i + 1])) && !isspace(str[i])) {
            // Print the last character of the word
            printf("%c", str[i]);
        }
    }
    printf("\n");

    return 0;
}

/*
OUTPUT:
Enter a string: Kalinga Institute of Industrial Technology
Last character of each word of the given string: aefly
*/
