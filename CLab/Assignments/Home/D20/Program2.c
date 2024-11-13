/*
QUESTION:
Write a C program to remove all consecutive duplicate characters from a given string.
Input: Enter a string: Sppeakk Loudlly
Output: After removing duplicate characters the string is: Speak Loudly
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int j = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Remove consecutive duplicate characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != str[i + 1]) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    // Output the modified string
    printf("After removing duplicate characters the string is: %s\n", result);

    return 0;
}

/*
OUTPUT:
Enter a string: Sppeakk Loudlly
After removing duplicate characters the string is: Speak Loudly
*/
