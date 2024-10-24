/*
QUESTION:
WAP to read a character from the user and test whether it is a vowel, consonant, or not an alphabet.

Input 1: Enter a character: B
Output 1: The entered character 'B' is a consonant.
Input 2: Enter a character: E
Output 2: The entered character 'E' is a vowel.
Input 3: Enter a character: %
Output 3: Entered character % is not an alphabet.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) {
        ch = toupper(ch);  // Convert to uppercase for easy comparison
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("The entered character '%c' is a vowel.\n", ch);
        } else {
            printf("The entered character '%c' is a consonant.\n", ch);
        }
    } else {
        printf("Entered character %c is not an alphabet.\n", ch);
    }

    return 0;
}
/*
OUTPUT:
The entered character 'B' is a consonant.
The entered character 'E' is a vowel.
Entered character % is not an alphabet.
*/
