/*
QUESTION:
Write a C program to read a character from the user and check whether it is a vowel or consonant using a switch statement. If the entered character is not an alphabet, then print the appropriate message.

Input 1: Enter a character: E
Output 1: Entered character is a vowel.
Input 2: Enter a character: *
Output 2: Entered character is not an alphabet.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Entered character is a vowel.\n");
            break;
        default:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                printf("Entered character is a consonant.\n");
            } else {
                printf("Entered character is not an alphabet.\n");
            }
    }

    return 0;
}
/*
OUTPUT:
Entered character is a vowel.
Entered character is not an alphabet.
*/
