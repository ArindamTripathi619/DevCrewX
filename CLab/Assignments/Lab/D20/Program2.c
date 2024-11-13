/*
QUESTION:
Write a C program to capitalize the first letter of each word in a given sentence.
Input: Enter a string: kalinga institute of technology
Output: Kalinga Institute Of Technology
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);

    // Capitalize first letter of each word
    while (str[i]) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    // Output the modified string
    printf("Output: %s\n", str);

    return 0;
}

/*
OUTPUT:
Enter a string: kalinga institute of technology
Output: Kalinga Institute Of Technology
*/
