/*
QUESTION:
Write a C program to capitalize the first character of each word in a string entered through the keyboard.
Input: Enter a string: prakash kumar singh
Output: After capitalizing first letter, string is: Prakash Kumar Singh
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeWords(char str[]) {
    int capitalizeNext = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            capitalizeNext = 1;
        } else if (capitalizeNext) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        }
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Capitalize first letter of each word
    capitalizeWords(str);

    // Display the capitalized string
    printf("After capitalizing first letter, string is: %s\n", str);

    return 0;
}

/*
OUTPUT:
Enter a string: prakash kumar singh
After capitalizing first letter, string is: Prakash Kumar Singh
*/
